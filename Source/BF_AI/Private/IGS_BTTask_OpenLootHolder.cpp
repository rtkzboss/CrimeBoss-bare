#include "IGS_BTTask_OpenLootHolder.h"
#include "IGS_LootCollectionBase.h"

UIGS_BTTask_OpenLootHolder::UIGS_BTTask_OpenLootHolder() {
    (*this).DelayAfterInteracting = 1.000000000e+00f;
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestLootingCollection_Object_2147482499"), AIGS_LootCollectionBase::StaticClass());
    (*this).BestLootingCollection = gen;
    (*this).NodeName = TEXT("Open Loot Holder");
}

