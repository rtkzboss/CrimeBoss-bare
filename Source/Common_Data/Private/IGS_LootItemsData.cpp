#include "IGS_LootItemsData.h"
#include "EIGS_ItemType.h"

FIGS_LootItemsData::FIGS_LootItemsData() {
    (*this).LootSize = EIGS_LootSize::Medium;
    (*this).SmallHits = false;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).LootCategoryTag, 0)) = TEXT("Loot.None");
    (*this).StandMesh = FSoftObjectPath();
    (*this).ItemType = EIGS_ItemType::Item_Loot;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ItemOffence, 0)) = TEXT("Offence.Actor.Item.Valuable");
}
