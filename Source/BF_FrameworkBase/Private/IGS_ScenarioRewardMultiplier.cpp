#include "IGS_ScenarioRewardMultiplier.h"

FIGS_ScenarioRewardMultiplier::FIGS_ScenarioRewardMultiplier() {
    (*this).ItemName = TEXT("");
    auto gen = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionScenarios, 0)) = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionScenarios, 0)) = {};
    (*this).RewardMultiplier = 1.000000000e+00f;
}
