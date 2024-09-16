#include "IGS_LootCollectionData.h"

FIGS_LootCollectionData::FIGS_LootCollectionData() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).PlacementType, 0)) = TEXT("Loot.None");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).LootCategory, 0)) = TEXT("Loot");
    (*this).LootCollection = FSoftObjectPath();
}
