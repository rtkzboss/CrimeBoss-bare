#include "META_HeisterLoadoutSave.h"
#include "EMETA_ItemQuality.h"

FMETA_HeisterLoadoutSave::FMETA_HeisterLoadoutSave() {
    (*this).PrimaryWeapon = nullptr;
    (*this).PrimaryWeaponSaveData.Amount = 0;
    (*this).PrimaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).PrimaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).PrimaryWeaponSaveData.DaysInShop = 0;
    (*this).PrimaryWeaponSaveData.WeaponSkin = FGameplayTag();
    (*this).PrimaryWeaponSaveData.TargetWeaponsForUpgrade = {};
    (*this).PrimaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*this).PrimaryWeaponSaveData.itemTag = FGameplayTag();
    (*this).PrimaryWeaponSaveData.Price = 0;
    (*this).PrimaryWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).PrimaryWeaponSaveData.IsUnseenInShop = false;
    (*this).PrimaryPersonalWeapons = {};
    (*this).SecondaryWeapon = nullptr;
    (*this).SecondaryWeaponSaveData.Amount = 0;
    (*this).SecondaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).SecondaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).SecondaryWeaponSaveData.DaysInShop = 0;
    (*this).SecondaryWeaponSaveData.WeaponSkin = FGameplayTag();
    (*this).SecondaryWeaponSaveData.TargetWeaponsForUpgrade = {};
    (*this).SecondaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*this).SecondaryWeaponSaveData.itemTag = FGameplayTag();
    (*this).SecondaryWeaponSaveData.Price = 0;
    (*this).SecondaryWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).SecondaryWeaponSaveData.IsUnseenInShop = false;
    (*this).SecondaryPersonalWeapons = {};
    (*this).Equipment = {};
    (*this).SelectedEquipment.EquipmentID = nullptr;
    (*this).SelectedEquipment.itemTag = FGameplayTag();
    (*this).SelectedEquipment.Price = 0;
    (*this).SelectedEquipment.RelativePrice = 0.000000000e+00f;
    (*this).SelectedEquipment.IsUnseenInShop = false;
    (*this).CharacterSkin = FGameplayTag();
}
