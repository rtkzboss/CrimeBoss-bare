#include "IGS_CarryableTableRow.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"
#include "EIGS_LootSize.h"
#include "EIGS_WieldableClass.h"

FIGS_CarryableTableRow::FIGS_CarryableTableRow() {
    (*this).ID = nullptr;
    (*this).Data.BaseDamage = 1.000000000e+02f;
    (*this).Data.BaseZoomMagnification = 1.250000000e+00f;
    (*this).Data.IsLoot = true;
    (*this).Data.LootSize = EIGS_LootSize::Medium;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Data.LootCategoryTag, 0)) = TEXT("Loot.None");
    (*this).Data.ClassToDrop = FSoftObjectPath(TEXT("/Game/00_Main/Carryables/Pickups/BP_CarryablePickup_Default.BP_CarryablePickup_Default_C"), TEXT(""));
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Data.PlacementType, 0)) = TEXT("Loot.None");
    (*this).Data.WieldableClass = FSoftObjectPath();
    (*this).Data.WieldableTortillaBaseFOV = 4.500000000e+01f;
    (*this).Data.WieldableTortillaAimFOV = 4.500000000e+01f;
    (*this).Data.HolsterTimeInSeconds = 5.000000000e-01f;
    (*this).Data.WieldingMovementSpeedMultiplier = 1.000000000e+00f;
    (*this).Data.Class = EIGS_WieldableClass::C_Generic;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Data.ClassTag, 0)) = TEXT("Item.Wieldable");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Data.WieldingOffence, 0)) = NAME_None;
    (*this).Data.DefaultSkin = FSoftObjectPath();
    (*this).Data.ItemType = EIGS_ItemType::Item_Carryable;
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
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Data.ItemOffence, 0)) = NAME_None;
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0)) = {};
    (*this).Data.GrantedAbilities = {};
    (*this).Data.AppliedEffects = {};
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    (*this).Data.AdditionalPreloadClasses = {};
    (*this).Data.AdditionalPreloadObjects = {};
}
