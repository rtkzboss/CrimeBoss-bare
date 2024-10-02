#include "IGS_Quick_CrewManagerSaveData.h"
#include "IGS_EquipmentInventoryObject.h"
#include "META_PerkData.h"
#include "META_WeaponInventoryObject.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "Templates/SubclassOf.h"

FIGS_Quick_CrewManagerSaveData::FIGS_Quick_CrewManagerSaveData() {
    (*this).bInited = false;
    (*this).Heisters = TArray<FMETA_HeisterSaveData>{};
    (*this).BossCharacter.Loadout.PrimaryWeapon = nullptr;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.Amount = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.DaysInShop = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.WeaponSkin = FGameplayTag();
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.TargetWeaponsForUpgrade = TArray<UClass*>{};
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.itemTag = FGameplayTag();
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.Price = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.IsUnseenInShop = false;
    (*this).BossCharacter.Loadout.PrimaryPersonalWeapons = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).BossCharacter.Loadout.SecondaryWeapon = nullptr;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.Amount = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.DaysInShop = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.WeaponSkin = FGameplayTag();
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.TargetWeaponsForUpgrade = TArray<UClass*>{};
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.itemTag = FGameplayTag();
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.Price = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.IsUnseenInShop = false;
    (*this).BossCharacter.Loadout.SecondaryPersonalWeapons = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).BossCharacter.Loadout.MeleeWeapon = nullptr;
    (*this).BossCharacter.Loadout.MeleeWeaponSaveData.Amount = 0;
    (*this).BossCharacter.Loadout.MeleeWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).BossCharacter.Loadout.MeleeWeaponSaveData.SuccessfulMissions = 0;
    (*this).BossCharacter.Loadout.MeleeWeaponSaveData.DaysInShop = 0;
    (*this).BossCharacter.Loadout.MeleeWeaponSaveData.WeaponSkin = FGameplayTag();
    (*this).BossCharacter.Loadout.MeleeWeaponSaveData.TargetWeaponsForUpgrade = TArray<UClass*>{};
    (*this).BossCharacter.Loadout.MeleeWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*this).BossCharacter.Loadout.MeleeWeaponSaveData.itemTag = FGameplayTag();
    (*this).BossCharacter.Loadout.MeleeWeaponSaveData.Price = 0;
    (*this).BossCharacter.Loadout.MeleeWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).BossCharacter.Loadout.MeleeWeaponSaveData.IsUnseenInShop = false;
    (*this).BossCharacter.Loadout.MeleePersonalWeapons = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).BossCharacter.Loadout.Equipment = TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>{};
    (*this).BossCharacter.Loadout.SelectedEquipment.EquipmentID = nullptr;
    (*this).BossCharacter.Loadout.SelectedEquipment.itemTag = FGameplayTag();
    (*this).BossCharacter.Loadout.SelectedEquipment.Price = 0;
    (*this).BossCharacter.Loadout.SelectedEquipment.RelativePrice = 0.000000000e+00f;
    (*this).BossCharacter.Loadout.SelectedEquipment.IsUnseenInShop = false;
    (*this).BossCharacter.Loadout.CharacterSkin = FGameplayTag();
    (*this).BossCharacter.Perks = TArray<FMETA_PerkData>{};
}
