#include "META_GenericCharacterSave.h"

FMETA_GenericCharacterSave::FMETA_GenericCharacterSave() {
    (*this).TagID = FGameplayTag();
    (*this).ItemPrice = 0;
    (*this).RelativeItemPrice = 0.000000000e+00f;
    (*this).ArrayIndex = 0;
    (*this).ID = EIGS_CharacterID::Char_Unknown;
    (*this).GenericUniqId = -1;
    (*this).GenericVariantID = -1;
    (*this).MutableVariationIndex = -1;
    (*this).Name = FText::GetEmpty();
    (*this).Surname = FText::GetEmpty();
    (*this).Quality = EMETA_ItemQuality::None;
    (*this).Level = 1;
    (*this).CanLevelUp = true;
    (*this).UpkeepCost = 0;
    (*this).MissionCutPercent = 0;
    (*this).HireCost = 0;
    (*this).WeaponsCostCoefficient = 1.000000000e+00f;
    (*this).CarryCapacity = 0;
    (*this).Injuries = 0;
    (*this).TimesHealed = 0;
    (*this).JobsCanBeCompletedPerDay = 1;
    (*this).State = EMETA_CharacterState::None;
    (*this).Mood = EMETA_CharacterMood::Neutral;
    (*this).Traits = FGameplayTagContainer();
    (*this).Perks = {};
    (*this).ChangedHeisterAttributes = {};
    (*this).Variables = {};
    (*this).InjureChanceInPercentage = 0;
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*this).Loadout.PrimaryWeaponSaveData.Amount = 0;
    (*this).Loadout.PrimaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).Loadout.PrimaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).Loadout.PrimaryWeaponSaveData.DaysInShop = 0;
    (*this).Loadout.PrimaryWeaponSaveData.WeaponSkin = FGameplayTag();
    (*this).Loadout.PrimaryWeaponSaveData.TargetWeaponsForUpgrade = {};
    (*this).Loadout.PrimaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*this).Loadout.PrimaryWeaponSaveData.itemTag = FGameplayTag();
    (*this).Loadout.PrimaryWeaponSaveData.Price = 0;
    (*this).Loadout.PrimaryWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).Loadout.PrimaryWeaponSaveData.IsUnseenInShop = false;
    (*this).Loadout.PrimaryPersonalWeapons = {};
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*this).Loadout.SecondaryWeaponSaveData.Amount = 0;
    (*this).Loadout.SecondaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).Loadout.SecondaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).Loadout.SecondaryWeaponSaveData.DaysInShop = 0;
    (*this).Loadout.SecondaryWeaponSaveData.WeaponSkin = FGameplayTag();
    (*this).Loadout.SecondaryWeaponSaveData.TargetWeaponsForUpgrade = {};
    (*this).Loadout.SecondaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*this).Loadout.SecondaryWeaponSaveData.itemTag = FGameplayTag();
    (*this).Loadout.SecondaryWeaponSaveData.Price = 0;
    (*this).Loadout.SecondaryWeaponSaveData.RelativePrice = 0.000000000e+00f;
    (*this).Loadout.SecondaryWeaponSaveData.IsUnseenInShop = false;
    (*this).Loadout.SecondaryPersonalWeapons = {};
    (*this).Loadout.Equipment = {};
    (*this).Loadout.SelectedEquipment.EquipmentID = nullptr;
    (*this).Loadout.SelectedEquipment.itemTag = FGameplayTag();
    (*this).Loadout.SelectedEquipment.Price = 0;
    (*this).Loadout.SelectedEquipment.RelativePrice = 0.000000000e+00f;
    (*this).Loadout.SelectedEquipment.IsUnseenInShop = false;
    (*this).Loadout.CharacterSkin = FGameplayTag();
    (*this).MissionsWasPlayed = 0;
    (*this).bTemporary = false;
    (*this).SerializedMutableProfile = {};
    (*this).BaseLevelUpMultiplier = 0.000000000e+00f;
}
