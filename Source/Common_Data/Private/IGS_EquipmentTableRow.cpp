#include "IGS_EquipmentTableRow.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_EquipmentResourceType.h"
#include "EIGS_ItemType.h"

FIGS_EquipmentTableRow::FIGS_EquipmentTableRow() {
    (*this).ID = nullptr;
    (*this).Data.TagID = FGameplayTag();
    (*this).Data.Throwable = FSoftObjectPath();
    (*this).Data.Description = FText::FromString(TEXT("None"));
    (*this).Data.bAllowedForGeneration = false;
    (*this).Data.PriceModifier = 1.000000000e+00f;
    (*this).Data.ResourceType = EIGS_EquipmentResourceType::ERT_Charges;
    (*this).Data.Charges = 10;
    (*this).Data.bRefreshChargesOvertime = false;
    (*this).Data.SecondsUntilChargeRefresh = -1;
    (*this).Data.bRefreshChargesWithKills = false;
    (*this).Data.KillsToChargeRefresh = -1;
    (*this).Data.Cooldown = 1.000000000e+00f;
    (*this).Data.InitChargesGameplayEffect = FSoftObjectPath(TEXT("/Game/00_Main/GameplayAbilitySystem/Abilities/ChargesEffects/GE_InitAbilityCharges.GE_InitAbilityCharges_C"), TEXT(""));
    (*this).Data.AddChargesGameplayEffect = FSoftObjectPath(TEXT("/Game/00_Main/GameplayAbilitySystem/Abilities/ChargesEffects/GE_AddAbilityCharges.GE_AddAbilityCharges_C"), TEXT(""));
    (*this).Data.InventoryIconStringGlyph = TEXT("");
    (*this).Data.InventoryIconOverrideFontObject = nullptr;
    (*this).Data.UnlockProperties.IsUnlockable = false;
    (*this).Data.UnlockProperties.RequiredTags = FGameplayTagContainer();
    (*this).Data.UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).Data.UnlockProperties.ShowIfNotOwned = true;
    (*this).Data.UnlockProperties.UnlockCoverImage = FSoftObjectPath();
    (*this).Data.ItemType = EIGS_ItemType::Item_Equipment;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.bShouldMove = true;
    (*this).Data.Image = FSoftObjectPath();
    (*this).Data.PickupMesh = FSoftObjectPath();
    (*this).Data.PickupMeshSkeletal = FSoftObjectPath();
    (*this).Data.ItemPickUpAudioEvent = FSoftObjectPath();
    (*this).Data.ItemThrowAudioEvent = FSoftObjectPath();
    (*this).Data.HitImpactID = nullptr;
    (*this).Data.HitImpactMass = 1.000000000e+00f;
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*this).Data.ItemOffence = FGameplayTag::RequestGameplayTag(TEXT("Offence.Actor.Item.Equipment"));
    (*this).Data.GrantedTags = FGameplayTagContainer();
    (*this).Data.GrantedAbilities = {};
    (*this).Data.AppliedEffects = {};
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    (*this).Data.AdditionalPreloadClasses = {};
    (*this).Data.AdditionalPreloadObjects = {};
}
