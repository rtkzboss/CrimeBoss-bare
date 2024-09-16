#include "META_WeaponCachedData.h"

FMETA_WeaponCachedData::FMETA_WeaponCachedData() {
    (*this).Weapon = nullptr;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WeaponTag, 0)) = NAME_None;
}
