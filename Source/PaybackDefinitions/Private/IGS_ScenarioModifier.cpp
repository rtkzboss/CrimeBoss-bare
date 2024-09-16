#include "IGS_ScenarioModifier.h"

FIGS_ScenarioModifier::FIGS_ScenarioModifier() {
    auto gen = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Scenarios, 0)) = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Scenarios, 0)) = {};
    (*this).Modifier = 0;
}
