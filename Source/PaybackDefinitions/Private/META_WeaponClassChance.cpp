#include "META_WeaponClassChance.h"

FMETA_WeaponClassChance::FMETA_WeaponClassChance() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WeaponClass, 0)) = NAME_None;
    (*this).Chance = 0;
}
