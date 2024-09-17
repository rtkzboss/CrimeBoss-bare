#include "IGS_LootCollectionData.h"

FIGS_LootCollectionData::FIGS_LootCollectionData() {
    (*this).PlacementType = FGameplayTag::RequestGameplayTag(TEXT("Loot.None"));
    (*this).LootCategory = FGameplayTag::RequestGameplayTag(TEXT("Loot"));
    (*this).LootCollection = FSoftObjectPath();
}
