#include "IGS_WeaponSkinStruct.h"

FIGS_WeaponSkinStruct::FIGS_WeaponSkinStruct() {
    (*this).TagID = FGameplayTag();
    (*this).WeaponSkinID = FSoftObjectPath();
}
