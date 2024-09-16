#include "IGS_Quick_CrewManagerSaveData.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"

FIGS_Quick_CrewManagerSaveData::FIGS_Quick_CrewManagerSaveData() {
    (*this).bInited = false;
    (*this).Heisters = {};
    (*this).BossCharacter.Loadout.PrimaryWeapon = nullptr;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.Amount = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.DaysInShop = 0;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.PrimaryWeaponSaveData.WeaponSkin, 0)) = NAME_None;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.TargetWeaponsForUpgrade = {};
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.PrimaryWeaponSaveData.itemTag, 0)) = NAME_None;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.Price = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.IsUnseenInShop = false;
    (*this).BossCharacter.Loadout.PrimaryPersonalWeapons = {};
    (*this).BossCharacter.Loadout.SecondaryWeapon = nullptr;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.Amount = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.DaysInShop = 0;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.SecondaryWeaponSaveData.WeaponSkin, 0)) = NAME_None;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.TargetWeaponsForUpgrade = {};
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.SecondaryWeaponSaveData.itemTag, 0)) = NAME_None;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.Price = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.IsUnseenInShop = false;
    (*this).BossCharacter.Loadout.SecondaryPersonalWeapons = {};
    (*this).BossCharacter.Loadout.Equipment = {};
    (*this).BossCharacter.Loadout.SelectedEquipment.EquipmentID = nullptr;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.SelectedEquipment.itemTag, 0)) = NAME_None;
    (*this).BossCharacter.Loadout.SelectedEquipment.Price = 0;
    (*this).BossCharacter.Loadout.SelectedEquipment.RelativePrice = 0.000000000e+00f;
    (*this).BossCharacter.Loadout.SelectedEquipment.IsUnseenInShop = false;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.CharacterSkin, 0)) = NAME_None;
    (*this).BossCharacter.Perks = {};
}
