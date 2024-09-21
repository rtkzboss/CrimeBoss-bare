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
	UE_LOG(LogBF_LevelGenerator, Display, TEXT("OnRep_Seed %s"), *GetFullNameSafe(this));
	FDebug::DumpStackTraceToLog(ELogVerbosity::Display);
}


void AIGS_LevelBuilder_LevelScriptActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(AIGS_LevelBuilder_LevelScriptActor, mR_RepProperties, COND_InitialOnly);
}

void AIGS_LevelBuilder_LevelScriptActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	bool bMainLevel = GetWorld()->GetLevelScriptActor() == this;
	if (!bMainLevel || !HasAuthority()) return;
	RunDefaultVariant_MainLevel_Server();
}
void AIGS_LevelBuilder_LevelScriptActor::RunDefaultVariant_MainLevel_Server()
{
	UE_LOG(LogBF_LevelGenerator, Display, TEXT("Server init main %s"), *GetFullNameSafe(this));

	// set up authoritative data
	mR_RepProperties.OptionsString = GetWorld()->GetAuthGameMode()->OptionsString;
	mR_RepProperties.ReplicatedSeed = UGameplayStatics::GetIntOption(mR_RepProperties.OptionsString, TEXT("Seed"), -1);
	if (mR_RepProperties.ReplicatedSeed < 0) mR_RepProperties.ReplicatedSeed = FMath::Rand();

	RunDefaultVariant_MainLevel_Common();
}
void AIGS_LevelBuilder_LevelScriptActor::RunDefaultVariant_MainLevel_Client()
{
	UE_LOG(LogBF_LevelGenerator, Display, TEXT("Client init main %s"), *GetFullNameSafe(this));
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

	RunDefaultVariant_Common(FIGS_GeneratorVariantData());
}
void AIGS_LevelBuilder_LevelScriptActor::RunDefaultVariant_Common(FIGS_GeneratorVariantData VariantData)
{
	UE_LOG(LogBF_LevelGenerator, Display, TEXT("Run default variant of %s"), *GetFullNameSafe(this));
	OnPrepareData(m_RandomStreamHolder);
	RunDefaultVariant(m_RandomStreamHolder, VariantData);
}

