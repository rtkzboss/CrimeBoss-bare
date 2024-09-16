#include "IGS_EquipmentData.h"
#include "GameplayTagContainer.h"
#include "EIGS_ItemType.h"

FIGS_EquipmentData::FIGS_EquipmentData() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).Throwable = FSoftObjectPath();
    (*this).Description = FText::FromString(TEXT("None"));
    (*this).bAllowedForGeneration = false;
    (*this).PriceModifier = 1.000000000e+00f;
    (*this).ResourceType = EIGS_EquipmentResourceType::ERT_Charges;
    (*this).Charges = 10;
    (*this).bRefreshChargesOvertime = false;
    (*this).SecondsUntilChargeRefresh = -1;
    (*this).bRefreshChargesWithKills = false;
    (*this).KillsToChargeRefresh = -1;
    (*this).Cooldown = 1.000000000e+00f;
    (*this).InitChargesGameplayEffect = FSoftObjectPath(TEXT("/Game/00_Main/GameplayAbilitySystem/Abilities/ChargesEffects/GE_InitAbilityCharges.GE_InitAbilityCharges_C"), TEXT(""));
    (*this).AddChargesGameplayEffect = FSoftObjectPath(TEXT("/Game/00_Main/GameplayAbilitySystem/Abilities/ChargesEffects/GE_AddAbilityCharges.GE_AddAbilityCharges_C"), TEXT(""));
    (*this).InventoryIconStringGlyph = TEXT("");
    (*this).InventoryIconOverrideFontObject = nullptr;
    (*this).UnlockProperties.IsUnlockable = false;
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0)) = {};
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
    (*this).UnlockProperties.UnlockCoverImage = FSoftObjectPath();
    (*this).ItemType = EIGS_ItemType::Item_Equipment;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ItemOffence, 0)) = TEXT("Offence.Actor.Item.Equipment");
}
