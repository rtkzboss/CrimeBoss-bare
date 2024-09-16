#include "IGS_RecomendedItemDefinition.h"

FIGS_RecomendedItemDefinition::FIGS_RecomendedItemDefinition() {
    (*this).AmountToBeSelected = 0;
    auto gen = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).JobCategoryPool, 0)) = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).JobCategoryPool, 0)) = {};
}
