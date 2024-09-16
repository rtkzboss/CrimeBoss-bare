#include "CommonWeaponLoadout.h"

FCommonWeaponLoadout::FCommonWeaponLoadout() {
    (*this).METAWeaponClass = FSoftObjectPath();
    (*this).WeaponClass = nullptr;
    (*this).WeaponMods = {};
}
