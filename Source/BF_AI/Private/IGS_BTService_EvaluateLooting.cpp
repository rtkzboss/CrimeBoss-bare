#include "IGS_BTService_EvaluateLooting.h"
#include "IGS_CarryableItemPickup.h"
#include "IGS_LootCollectionBase.h"

UIGS_BTService_EvaluateLooting::UIGS_BTService_EvaluateLooting() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestLootingCollection_Object_2147482591"), AIGS_LootCollectionBase::StaticClass());
    (*this).BestLootingCollection = gen;
    FBlackboardKeySelector gen2;
    gen2.AddObjectFilter(this, TEXT("BestLootCarryable_Object_2147482590"), AIGS_CarryableItemPickup::StaticClass());
    (*this).BestLootCarryable = gen2;
    (*this).NodeName = TEXT("Evaluate Looting");
}

