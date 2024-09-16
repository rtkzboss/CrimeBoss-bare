#include "META_BossCharacterSave.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"

FMETA_BossCharacterSave::FMETA_BossCharacterSave() {
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*this).Loadout.PrimaryWeaponSaveData.Amount = 0;
    (*this).Loadout.PrimaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).Loadout.PrimaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).Loadout.PrimaryWeaponSaveData.DaysInShop = 0;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Loadout.PrimaryWeaponSaveData.WeaponSkin, 0)) = NAME_None;
    (*this).Loadout.PrimaryWeaponSaveData.TargetWeaponsForUpgrade = {};
    (*this).Loadout.PrimaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Loadout.PrimaryWeaponSaveData.itemTag, 0)) = NAME_None;
    (*this).Loadout.PrimaryWeaponSaveData.Price = 0;
    (*this).Loadout.PrimaryWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).Loadout.PrimaryWeaponSaveData.IsUnseenInShop = false;
    (*this).Loadout.PrimaryPersonalWeapons = {};
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*this).Loadout.SecondaryWeaponSaveData.Amount = 0;
    (*this).Loadout.SecondaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).Loadout.SecondaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).Loadout.SecondaryWeaponSaveData.DaysInShop = 0;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Loadout.SecondaryWeaponSaveData.WeaponSkin, 0)) = NAME_None;
    (*this).Loadout.SecondaryWeaponSaveData.TargetWeaponsForUpgrade = {};
    (*this).Loadout.SecondaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Loadout.SecondaryWeaponSaveData.itemTag, 0)) = NAME_None;
    (*this).Loadout.SecondaryWeaponSaveData.Price = 0;
    (*this).Loadout.SecondaryWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).Loadout.SecondaryWeaponSaveData.IsUnseenInShop = false;
    (*this).Loadout.SecondaryPersonalWeapons = {};
    (*this).Loadout.Equipment = {};
    (*this).Loadout.SelectedEquipment.EquipmentID = nullptr;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Loadout.SelectedEquipment.itemTag, 0)) = NAME_None;
    (*this).Loadout.SelectedEquipment.Price = 0;
    (*this).Loadout.SelectedEquipment.RelativePrice = 0.000000000e+00f;
    (*this).Loadout.SelectedEquipment.IsUnseenInShop = false;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Loadout.CharacterSkin, 0)) = NAME_None;
    (*this).Perks = {};
}
