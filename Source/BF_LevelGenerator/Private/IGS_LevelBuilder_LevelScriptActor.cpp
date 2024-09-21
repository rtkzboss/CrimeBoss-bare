#include "IGS_LevelBuilder_LevelScriptActor.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"
#include "IGS_RandomStreamHolder.h"
#include "Kismet/GameplayStatics.h"
#include "IGS_GameStateGame.h"
#include "IGS_LevelGeneratorSubsystem.h"

AIGS_LevelBuilder_LevelScriptActor::AIGS_LevelBuilder_LevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DefaultMissionTag = FGameplayTag::RequestGameplayTag(TEXT("Mission.Unknown"));
    (*this).DefaultScenarioTag = FGameplayTag::RequestGameplayTag(TEXT("Mission.Unknown"));
    (*this).DefaultSeed = -1;
    (*this).NetDormancy = DORM_DormantAll;
    (*this).NetPriority = 5.000000000e+00f;
}


void AIGS_LevelBuilder_LevelScriptActor::OnRep_Seed() {

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

	mR_RepProperties.OptionsString = GetWorld()->GetAuthGameMode()->OptionsString;
	mR_RepProperties.ReplicatedSeed = UGameplayStatics::GetIntOption(mR_RepProperties.OptionsString, TEXT("Seed"), -1);
	if (mR_RepProperties.ReplicatedSeed < 0) mR_RepProperties.ReplicatedSeed = FMath::Rand();

	InitDefaultVariant_MainLevel();
}
void AIGS_LevelBuilder_LevelScriptActor::InitDefaultVariant_MainLevel()
{
	// set some legacy things from authoritative data
	DefaultSeed = mR_RepProperties.ReplicatedSeed;
	OptionsString = mR_RepProperties.OptionsString;
	UIGS_LevelGeneratorSubsystem* LGS = GetWorld()->GetSubsystem<UIGS_LevelGeneratorSubsystem>();
	LGS->SetDefaultSeed(DefaultSeed);

	// set up RSH
	m_RandomStreamHolder = NewObject<UIGS_RandomStreamHolder>(this);
	m_RandomStreamHolder->RandomStream.Initialize(DefaultSeed);

	InitDefaultVariant_Common();
}
void AIGS_LevelBuilder_LevelScriptActor::InitDefaultVariant_Common()
{
	OnPrepareData(m_RandomStreamHolder);
	RunDefaultVariant(m_RandomStreamHolder, FIGS_GeneratorVariantData());
}

