#include "META_WeaponGenerationRestriction.h"

FMETA_WeaponGenerationRestriction::FMETA_WeaponGenerationRestriction() {
    auto gen = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).WaponFilter, 0)) = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).WaponFilter, 0)) = {};
}
