#include "META_CharacterData.h"
#include "GameplayTagContainer.h"
#include "IGS_EquipmentInventoryObject.h"
#include "META_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"

class UMETA_Equipment;
class UMETA_Weapon;

FMETA_CharacterData::FMETA_CharacterData() {
    (*this).GenericVariantID = -1;
    (*this).Name = FText::GetEmpty();
    (*this).Surname = FText::GetEmpty();
    (*this).MetaCharacterIcon = FSoftObjectPath();
    (*this).Quality = EMETA_ItemQuality::None;
    (*this).Level = 1;
    (*this).CanLevelUp = true;
    (*this).BaseUpkeepCost = 0;
    (*this).BaseMissionCutPercent = 0;
    (*this).MaxLeveled = false;
    (*this).BaseHireCost = 0;
    (*this).WeaponsCostCoefficient = 1.000000000e+00f;
    (*this).JobsCanBeCompletedPerDay = 1;
    (*this).Description = FText::GetEmpty();
    (*this).Injuries = 0;
    (*this).State = EMETA_CharacterState::None;
    (*this).Mood = EMETA_CharacterMood::Neutral;
    (*this).Traits = FGameplayTagContainer();
    (*this).Perks = TArray<FMETA_PerkData>{};
    (*this).ChangedHeisterAttributes = TArray<FMETA_ChangedHeisterAttributeInfo>{};
    (*this).Class = nullptr;
    (*this).Attributes.MaxHealth = 960;
    (*this).Attributes.ReviveCount = 3;
    auto gen = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TokenStreamVersion");
    (*gen->ContainerPtrToValuePtr<int32>(&(*this).Attributes.AllowedWieldables, 0)) = 0;
    auto gen2 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Attributes.AllowedWieldables, 0)) = TArray<FGameplayTag>{FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable"))};
    auto gen3 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream");
    (*gen3->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).Attributes.AllowedWieldables, 0)) = TArray<uint8>{0, 1, 2, 1, 0};
    auto gen4 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("UserDescription");
    (*gen4->ContainerPtrToValuePtr<FString>(&(*this).Attributes.AllowedWieldables, 0)) = TEXT("");
    auto gen5 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("AutoDescription");
    (*gen5->ContainerPtrToValuePtr<FString>(&(*this).Attributes.AllowedWieldables, 0)) = TEXT("");
    (*this).Variables = TMap<FGameplayTag, int32>{};
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*this).Loadout.PrimaryWeaponClass = nullptr;
    (*this).Loadout.PrimaryPersonalWeapons = TArray<UMETA_Weapon*>{};
    (*this).Loadout.PrimaryWeaponSkin = FGameplayTag();
    (*this).Loadout.PrimaryPersonalWeaponsClass = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*this).Loadout.SecondaryWeaponClass = nullptr;
    (*this).Loadout.SecondaryPersonalWeapons = TArray<UMETA_Weapon*>{};
    (*this).Loadout.SecondaryWeaponSkin = FGameplayTag();
    (*this).Loadout.SecondaryPersonalWeaponsClass = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).Loadout.SelectedEquipment = nullptr;
    (*this).Loadout.ChainEquipments = TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>{};
    (*this).Loadout.ChainEquipmentsObjects = TArray<UMETA_Equipment*>{};
    (*this).Loadout.CharacterSkin = FGameplayTag();
    (*this).Loadout.Ability1ChargesLeft = -1;
    (*this).MissionsWasPlayed = 0;
    (*this).MutableVariationIndex = -1;
    (*this).TimesHealed = 0;
    (*this).bTemporary = false;
    (*this).bLocked = false;
    (*this).BaseLevelUpMultiplier = 0.000000000e+00f;
}
