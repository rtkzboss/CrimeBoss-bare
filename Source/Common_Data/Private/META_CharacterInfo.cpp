#include "META_CharacterInfo.h"
#include "GameplayTagContainer.h"
#include "EMETA_CharacterMood.h"
#include "EMETA_CharacterState.h"
#include "EMETA_ItemQuality.h"

FMETA_CharacterInfo::FMETA_CharacterInfo() {
    (*this).TagID = FGameplayTag();
    (*this).ID = EIGS_CharacterID::Char_Unknown;
    (*this).UniqGenericId = -1;
    (*this).Data.GenericVariantID = -1;
    (*this).Data.Name = FText::GetEmpty();
    (*this).Data.Surname = FText::GetEmpty();
    (*this).Data.MetaCharacterIcon = FSoftObjectPath();
    (*this).Data.Quality = EMETA_ItemQuality::None;
    (*this).Data.Level = 1;
    (*this).Data.CanLevelUp = true;
    (*this).Data.BaseUpkeepCost = 0;
    (*this).Data.BaseMissionCutPercent = 0;
    (*this).Data.MaxLeveled = false;
    (*this).Data.BaseHireCost = 0;
    (*this).Data.WeaponsCostCoefficient = 1.000000000e+00f;
    (*this).Data.JobsCanBeCompletedPerDay = 1;
    (*this).Data.Description = FText::GetEmpty();
    (*this).Data.Injuries = 0;
    (*this).Data.State = EMETA_CharacterState::None;
    (*this).Data.Mood = EMETA_CharacterMood::Neutral;
    (*this).Data.Traits = FGameplayTagContainer();
    (*this).Data.Perks = {};
    (*this).Data.ChangedHeisterAttributes = {};
    (*this).Data.Class = nullptr;
    (*this).Data.Attributes.MaxHealth = 960;
    (*this).Data.Attributes.ReviveCount = 3;
    auto gen = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TokenStreamVersion");
    (*gen->ContainerPtrToValuePtr<int32>(&(*this).Data.Attributes.AllowedWieldables, 0)) = 0;
    auto gen2 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.Attributes.AllowedWieldables, 0)) = {FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable"))};
    auto gen3 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream");
    (*gen3->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).Data.Attributes.AllowedWieldables, 0)) = {0, 1, 2, 1, 0};
    auto gen4 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("UserDescription");
    (*gen4->ContainerPtrToValuePtr<FString>(&(*this).Data.Attributes.AllowedWieldables, 0)) = TEXT("");
    auto gen5 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("AutoDescription");
    (*gen5->ContainerPtrToValuePtr<FString>(&(*this).Data.Attributes.AllowedWieldables, 0)) = TEXT("");
    (*this).Data.Variables = {};
    (*this).Data.Loadout.PrimaryWeapon = nullptr;
    (*this).Data.Loadout.PrimaryWeaponClass = nullptr;
    (*this).Data.Loadout.PrimaryPersonalWeapons = {};
    (*this).Data.Loadout.PrimaryWeaponSkin = FGameplayTag();
    (*this).Data.Loadout.PrimaryPersonalWeaponsClass = {};
    (*this).Data.Loadout.SecondaryWeapon = nullptr;
    (*this).Data.Loadout.SecondaryWeaponClass = nullptr;
    (*this).Data.Loadout.SecondaryPersonalWeapons = {};
    (*this).Data.Loadout.SecondaryWeaponSkin = FGameplayTag();
    (*this).Data.Loadout.SecondaryPersonalWeaponsClass = {};
    (*this).Data.Loadout.SelectedEquipment = nullptr;
    (*this).Data.Loadout.ChainEquipments = {};
    (*this).Data.Loadout.ChainEquipmentsObjects = {};
    (*this).Data.Loadout.CharacterSkin = FGameplayTag();
    (*this).Data.Loadout.Ability1ChargesLeft = -1;
    (*this).Data.MissionsWasPlayed = 0;
    (*this).Data.MutableVariationIndex = -1;
    (*this).Data.TimesHealed = 0;
    (*this).Data.bTemporary = false;
    (*this).Data.bLocked = false;
    (*this).Data.BaseLevelUpMultiplier = 0.000000000e+00f;
    (*this).IsUnseenInShop = false;
}
