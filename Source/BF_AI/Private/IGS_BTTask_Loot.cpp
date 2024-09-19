#include "IGS_BTTask_Loot.h"
#include "IGS_LootCollectionBase.h"

UIGS_BTTask_Loot::UIGS_BTTask_Loot() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestLootingCollection_Object_2147482519"), AIGS_LootCollectionBase::StaticClass());
    (*this).BestLootingCollection = gen;
    (*this).NodeName = TEXT("Loot");
}

