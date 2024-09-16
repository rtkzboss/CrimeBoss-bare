#include "IGS_WeaponSkinStruct.h"

FIGS_WeaponSkinStruct::FIGS_WeaponSkinStruct() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).WeaponSkinID = FSoftObjectPath();
}
