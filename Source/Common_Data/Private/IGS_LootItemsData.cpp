#include "IGS_LootItemsData.h"
#include "EIGS_ItemType.h"

FIGS_LootItemsData::FIGS_LootItemsData() {
    (*this).LootSize = EIGS_LootSize::Medium;
    (*this).SmallHits = false;
    (*this).LootCategoryTag = FGameplayTag::RequestGameplayTag(TEXT("Loot.None"));
    (*this).StandMesh = FSoftObjectPath();
    (*this).ItemType = EIGS_ItemType::Item_Loot;
    (*this).ItemOffence = FGameplayTag::RequestGameplayTag(TEXT("Offence.Actor.Item.Valuable"));
}
