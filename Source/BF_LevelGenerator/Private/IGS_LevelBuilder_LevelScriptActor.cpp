#include "IGS_LevelBuilder_LevelScriptActor.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

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

    DOREPLIFETIME(AIGS_LevelBuilder_LevelScriptActor, mR_RepProperties);
}

