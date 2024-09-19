#include "IGS_BTDecorator_NeedBreakLoot.h"
#include "IGS_LootCollectionBase.h"

UIGS_BTDecorator_NeedBreakLoot::UIGS_BTDecorator_NeedBreakLoot() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestLootingCollection_Object_2147482618"), AIGS_LootCollectionBase::StaticClass());
    (*this).BestLootingCollection = gen;
    (*this).NodeName = TEXT("Need Break Loot");
}

