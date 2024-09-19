#include "IGS_BTService_EvaluateThrowingComponents.h"
#include "IGS_CarryableItemPickup.h"
#include "IGS_LootCollectionBase.h"

UIGS_BTService_EvaluateThrowingComponents::UIGS_BTService_EvaluateThrowingComponents() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestLootCollection_Object_2147482586"), AIGS_LootCollectionBase::StaticClass());
    (*this).BestLootCollection = gen;
    FBlackboardKeySelector gen2;
    gen2.AddObjectFilter(this, TEXT("BestLootCarryable_Object_2147482585"), AIGS_CarryableItemPickup::StaticClass());
    (*this).BestLootCarryable = gen2;
    (*this).NodeName = TEXT("Evaluate Throwing Components");
}

