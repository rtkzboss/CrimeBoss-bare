#include "META_WeaponSaveData.h"

FMETA_WeaponSaveData::FMETA_WeaponSaveData() {
    (*this).Amount = 0;
    (*this).AdditionalPercentageOfWeaponPrice = 0;
    (*this).SuccessfulMissions = 0;
    (*this).DaysInShop = 0;
    (*this).WeaponSkin = FGameplayTag();
    (*this).TargetWeaponsForUpgrade = TArray<UClass*>{};
    (*this).TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
}
