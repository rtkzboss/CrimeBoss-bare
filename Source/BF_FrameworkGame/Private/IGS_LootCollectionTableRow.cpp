#include "IGS_LootCollectionTableRow.h"
#include "GameplayTagContainer.h"

FIGS_LootCollectionTableRow::FIGS_LootCollectionTableRow() {
    (*this).ID = nullptr;
    (*this).Data.PlacementType = FGameplayTag::RequestGameplayTag(TEXT("Loot.None"));
    (*this).Data.LootCategory = FGameplayTag::RequestGameplayTag(TEXT("Loot"));
    (*this).Data.LootCollection = FSoftObjectPath();
}
