#include "IGS_SpawnDefHolder.h"

FIGS_SpawnDefHolder::FIGS_SpawnDefHolder() {
    (*this).SpawnGroups = {};
    auto gen = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).DefendTags, 0)) = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).DefendTags, 0)) = {};
}
