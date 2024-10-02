#include "META_HeisterLoadoutSave.h"
#include "EMETA_ItemQuality.h"
#include "Templates/SubclassOf.h"

FMETA_HeisterLoadoutSave::FMETA_HeisterLoadoutSave() {
    (*this).PrimaryWeapon = nullptr;
    (*this).PrimaryWeaponSaveData.Amount = 0;
    (*this).PrimaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).PrimaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).PrimaryWeaponSaveData.DaysInShop = 0;
    (*this).PrimaryWeaponSaveData.WeaponSkin = FGameplayTag();
    (*this).PrimaryWeaponSaveData.TargetWeaponsForUpgrade = TArray<UClass*>{};
    (*this).PrimaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*this).PrimaryWeaponSaveData.itemTag = FGameplayTag();
    (*this).PrimaryWeaponSaveData.Price = 0;
    (*this).PrimaryWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).PrimaryWeaponSaveData.IsUnseenInShop = false;
    (*this).PrimaryPersonalWeapons = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).SecondaryWeapon = nullptr;
    (*this).SecondaryWeaponSaveData.Amount = 0;
    (*this).SecondaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).SecondaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).SecondaryWeaponSaveData.DaysInShop = 0;
    (*this).SecondaryWeaponSaveData.WeaponSkin = FGameplayTag();
    (*this).SecondaryWeaponSaveData.TargetWeaponsForUpgrade = TArray<UClass*>{};
    (*this).SecondaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*this).SecondaryWeaponSaveData.itemTag = FGameplayTag();
    (*this).SecondaryWeaponSaveData.Price = 0;
    (*this).SecondaryWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).SecondaryWeaponSaveData.IsUnseenInShop = false;
    (*this).SecondaryPersonalWeapons = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).MeleeWeapon = nullptr;
    (*this).MeleeWeaponSaveData.Amount = 0;
    (*this).MeleeWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).MeleeWeaponSaveData.SuccessfulMissions = 0;
    (*this).MeleeWeaponSaveData.DaysInShop = 0;
    (*this).MeleeWeaponSaveData.WeaponSkin = FGameplayTag();
    (*this).MeleeWeaponSaveData.TargetWeaponsForUpgrade = TArray<UClass*>{};
    (*this).MeleeWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*this).MeleeWeaponSaveData.itemTag = FGameplayTag();
    (*this).MeleeWeaponSaveData.Price = 0;
    (*this).MeleeWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).MeleeWeaponSaveData.IsUnseenInShop = false;
    (*this).MeleePersonalWeapons = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).Equipment = TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>{};
    (*this).SelectedEquipment.EquipmentID = nullptr;
    (*this).SelectedEquipment.itemTag = FGameplayTag();
    (*this).SelectedEquipment.Price = 0;
    (*this).SelectedEquipment.RelativePrice = 0.000000000e+00f;
    (*this).SelectedEquipment.IsUnseenInShop = false;
    (*this).CharacterSkin = FGameplayTag();
}
