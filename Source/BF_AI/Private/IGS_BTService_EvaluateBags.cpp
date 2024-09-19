#include "IGS_BTService_EvaluateBags.h"
#include "IGS_LootBagPickup.h"

UIGS_BTService_EvaluateBags::UIGS_BTService_EvaluateBags() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestBagKey_Object_2147482596"), AIGS_LootBagPickup::StaticClass());
    (*this).BestBagKey = gen;
    (*this).NodeName = TEXT("Evaluate Pickup Bag");
}

