#include "IGS_LootCollectionTableRow.h"
#include "GameplayTagContainer.h"

FIGS_LootCollectionTableRow::FIGS_LootCollectionTableRow() {
    (*this).ID = nullptr;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Data.PlacementType, 0)) = TEXT("Loot.None");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Data.LootCategory, 0)) = TEXT("Loot");
    (*this).Data.LootCollection = FSoftObjectPath();
}
