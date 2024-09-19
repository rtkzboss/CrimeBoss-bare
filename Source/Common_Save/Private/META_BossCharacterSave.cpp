#include "META_BossCharacterSave.h"
#include "IGS_EquipmentInventoryObject.h"
#include "META_WeaponInventoryObject.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "Templates/SubclassOf.h"

FMETA_BossCharacterSave::FMETA_BossCharacterSave() {
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*this).Loadout.PrimaryWeaponSaveData.Amount = 0;
    (*this).Loadout.PrimaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).Loadout.PrimaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).Loadout.PrimaryWeaponSaveData.DaysInShop = 0;
    (*this).Loadout.PrimaryWeaponSaveData.WeaponSkin = FGameplayTag();
    (*this).Loadout.PrimaryWeaponSaveData.TargetWeaponsForUpgrade = TArray<UClass*>{};
    (*this).Loadout.PrimaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*this).Loadout.PrimaryWeaponSaveData.itemTag = FGameplayTag();
    (*this).Loadout.PrimaryWeaponSaveData.Price = 0;
    (*this).Loadout.PrimaryWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).Loadout.PrimaryWeaponSaveData.IsUnseenInShop = false;
    (*this).Loadout.PrimaryPersonalWeapons = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*this).Loadout.SecondaryWeaponSaveData.Amount = 0;
    (*this).Loadout.SecondaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).Loadout.SecondaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).Loadout.SecondaryWeaponSaveData.DaysInShop = 0;
    (*this).Loadout.SecondaryWeaponSaveData.WeaponSkin = FGameplayTag();
    (*this).Loadout.SecondaryWeaponSaveData.TargetWeaponsForUpgrade = TArray<UClass*>{};
    (*this).Loadout.SecondaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*this).Loadout.SecondaryWeaponSaveData.itemTag = FGameplayTag();
    (*this).Loadout.SecondaryWeaponSaveData.Price = 0;
    (*this).Loadout.SecondaryWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).Loadout.SecondaryWeaponSaveData.IsUnseenInShop = false;
    (*this).Loadout.SecondaryPersonalWeapons = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).Loadout.Equipment = TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>{};
    (*this).Loadout.SelectedEquipment.EquipmentID = nullptr;
    (*this).Loadout.SelectedEquipment.itemTag = FGameplayTag();
    (*this).Loadout.SelectedEquipment.Price = 0;
    (*this).Loadout.SelectedEquipment.RelativePrice = 0.000000000e+00f;
    (*this).Loadout.SelectedEquipment.IsUnseenInShop = false;
    (*this).Loadout.CharacterSkin = FGameplayTag();
    (*this).Perks = TArray<FMETA_PerkData>{};
}
