#include "META_LootBagConfiguration.h"

FMETA_LootBagConfiguration::FMETA_LootBagConfiguration() {
    auto gen = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Missions, 0)) = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Missions, 0)) = {};
    (*this).TotalLootbagCount = 0;
}
