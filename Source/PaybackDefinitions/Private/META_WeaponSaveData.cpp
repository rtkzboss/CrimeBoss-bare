#include "META_WeaponSaveData.h"

FMETA_WeaponSaveData::FMETA_WeaponSaveData() {
    (*this).Amount = 0;
    (*this).AdditionalPercentageOfWeaponPrice = 0;
    (*this).SuccessfulMissions = 0;
    (*this).DaysInShop = 0;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WeaponSkin, 0)) = NAME_None;
    (*this).TargetWeaponsForUpgrade = {};
    (*this).TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
}
