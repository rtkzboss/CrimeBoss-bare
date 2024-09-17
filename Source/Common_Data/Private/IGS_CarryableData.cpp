#include "IGS_CarryableData.h"
#include "EIGS_ItemType.h"

FIGS_CarryableData::FIGS_CarryableData() {
    (*this).BaseDamage = 1.000000000e+02f;
    (*this).BaseZoomMagnification = 1.250000000e+00f;
    (*this).IsLoot = true;
    (*this).LootSize = EIGS_LootSize::Medium;
    (*this).LootCategoryTag = FGameplayTag::RequestGameplayTag(TEXT("Loot.None"));
    (*this).ClassToDrop = FSoftObjectPath(TEXT("/Game/00_Main/Carryables/Pickups/BP_CarryablePickup_Default.BP_CarryablePickup_Default_C"), TEXT(""));
    (*this).PlacementType = FGameplayTag::RequestGameplayTag(TEXT("Loot.None"));
    (*this).ItemType = EIGS_ItemType::Item_Carryable;
}
