#include "IGS_UnlockProperties.h"

FIGS_UnlockProperties::FIGS_UnlockProperties() {
    (*this).IsUnlockable = false;
    auto gen = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RequiredTags, 0)) = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RequiredTags, 0)) = {};
    (*this).RequiredValue = 0.000000000e+00f;
    (*this).ShowIfNotOwned = true;
    (*this).UnlockCoverImage = FSoftObjectPath();
}
