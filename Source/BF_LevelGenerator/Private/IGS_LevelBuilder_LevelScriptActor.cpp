#include "IGS_LevelBuilder_LevelScriptActor.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"
#include "IGS_RandomStreamHolder.h"
#include "Kismet/GameplayStatics.h"
#include "IGS_GameStateGame.h"
#include "IGS_LevelGeneratorSubsystem.h"
#include "BF_LevelGeneratorModule.h"

AIGS_LevelBuilder_LevelScriptActor::AIGS_LevelBuilder_LevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DefaultMissionTag = FGameplayTag::RequestGameplayTag(TEXT("Mission.Unknown"));
    (*this).DefaultScenarioTag = FGameplayTag::RequestGameplayTag(TEXT("Mission.Unknown"));
    (*this).DefaultSeed = -1;
    (*this).NetDormancy = DORM_DormantAll;
    (*this).NetPriority = 5.000000000e+00f;
}


void AIGS_LevelBuilder_LevelScriptActor::OnRep_Seed() {
	UE_LOG(LogBF_LevelGenerator, Display, TEXT("OnRep_Seed %s seed=%d options=%s"), *GetFullNameSafe(this), mR_RepProperties.ReplicatedSeed, *mR_RepProperties.OptionsString);
	// TODO: should wait for gamestate data to be ready
	RunDefaultVariant_MainLevel_Client();
}


void AIGS_LevelBuilder_LevelScriptActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ThisClass, mR_RepProperties, COND_InitialOnly);
}

void AIGS_LevelBuilder_LevelScriptActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	bool bMainLevel = GetWorld()->GetSubsystem<UIGS_LevelGeneratorSubsystem>()->GetMainLevelScriptActor() == this;
	if (!bMainLevel || !HasAuthority()) return;
	RunDefaultVariant_MainLevel_Server();
}
void AIGS_LevelBuilder_LevelScriptActor::RunDefaultVariant_MainLevel_Server()
{
	UE_LOG(LogBF_LevelGenerator, Log, TEXT("Server init %s"), *GetFullNameSafe(this));

	// set up authoritative data
	mR_RepProperties.OptionsString = GetWorld()->GetAuthGameMode()->OptionsString;
	mR_RepProperties.ReplicatedSeed = UGameplayStatics::GetIntOption(mR_RepProperties.OptionsString, TEXT("Seed"), -1);
	if (mR_RepProperties.ReplicatedSeed < 0) mR_RepProperties.ReplicatedSeed = FMath::Rand();

	RunDefaultVariant_MainLevel_Common();
}
void AIGS_LevelBuilder_LevelScriptActor::RunDefaultVariant_MainLevel_Client()
{
	UE_LOG(LogBF_LevelGenerator, Log, TEXT("Client init %s"), *GetFullNameSafe(this));
	RunDefaultVariant_MainLevel_Common();
}
void AIGS_LevelBuilder_LevelScriptActor::RunDefaultVariant_MainLevel_Common()
{
	// set some legacy things from authoritative data
	DefaultSeed = mR_RepProperties.ReplicatedSeed;
	OptionsString = mR_RepProperties.OptionsString;
	UIGS_LevelGeneratorSubsystem* LGS = GetWorld()->GetSubsystem<UIGS_LevelGeneratorSubsystem>();
	LGS->SetDefaultSeed(DefaultSeed);

	// set up RSH
	m_RandomStreamHolder = NewObject<UIGS_RandomStreamHolder>(this);
	m_RandomStreamHolder->RandomStream.Initialize(DefaultSeed);

	UE_LOG(LogBF_LevelGenerator, Display, TEXT("Run main level builder %s seed=%d options=%s"), *GetFullNameSafe(this), DefaultSeed, *OptionsString);

	RunVariant_Common(NAME_None, FIGS_GeneratorVariantData());
}
TCHAR const* AIGS_LevelBuilder_LevelScriptActor::VariantPrefix = TEXT("BUILDVT_");
FName AIGS_LevelBuilder_LevelScriptActor::GetEventNameFromVariant(FName VariantName)
{
	FString Out = VariantPrefix;
	VariantName.ToString(Out);
	return FName(Out);
}
FName AIGS_LevelBuilder_LevelScriptActor::GetVariantNameFromEvent(FName EventName)
{
	FString Str = EventName.ToString();
	if (!Str.RemoveFromStart(VariantPrefix)) return NAME_None;
	return FName(Str);
}
void AIGS_LevelBuilder_LevelScriptActor::RunVariant_Sublevel(UIGS_RandomStreamHolder* RSH, FName VariantName, FIGS_GeneratorVariantData VariantData)
{
	UIGS_LevelGeneratorSubsystem* LGS = GetWorld()->GetSubsystem<UIGS_LevelGeneratorSubsystem>();
	AIGS_LevelBuilder_LevelScriptActor* Main = LGS->GetMainLevelScriptActor();
	DefaultSeed = Main->DefaultSeed;
	OptionsString = Main->OptionsString;

	m_RandomStreamHolder = RSH;

	RunVariant_Common(VariantName, VariantData);
}
void AIGS_LevelBuilder_LevelScriptActor::RunVariant_Common(FName VariantName, FIGS_GeneratorVariantData VariantData)
{
	UE_LOG(LogBF_LevelGenerator, Verbose, TEXT("Prepare data for %s"), *GetFullNameSafe(this));
	OnPrepareData(m_RandomStreamHolder);

	if (VariantName.IsNone())
	{
		UE_LOG(LogBF_LevelGenerator, Verbose, TEXT("Run default variant of %s"), *GetFullNameSafe(this));
		RunDefaultVariant(m_RandomStreamHolder, VariantData);
		return;
	}

	FRICOBuildVariantEvent Event;
	Event.BindUFunction(this, GetEventNameFromVariant(VariantName));
	if (!Event.IsBound()) // i.e. the event doesn't exist
	{
		UE_LOG(LogBF_LevelGenerator, Error, TEXT("Variant %s of %s does not exist!"), *VariantName.ToString(), *GetFullNameSafe(this));
		return;
	}
	UE_LOG(LogBF_LevelGenerator, Verbose, TEXT("Run variant %s of %s"), *VariantName.ToString(), *GetFullNameSafe(this));
	Event.Execute(m_RandomStreamHolder, VariantData);
}

