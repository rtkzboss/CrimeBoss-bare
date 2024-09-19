#include "CommonWeaponLoadout.h"
#include "Templates/SubclassOf.h"

FCommonWeaponLoadout::FCommonWeaponLoadout() {
    (*this).METAWeaponClass = FSoftObjectPath();
    (*this).WeaponClass = nullptr;
    (*this).WeaponMods = TArray<TSubclassOf<UIGS_ModInventoryObject>>{};
}
