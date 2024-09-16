#include "META_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration.h"

FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration::FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration() {
    auto gen = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MoneyMakingScenarios, 0)) = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MoneyMakingScenarios, 0)) = {};
    (*this).RewardsAndProbabilities = {};
}
