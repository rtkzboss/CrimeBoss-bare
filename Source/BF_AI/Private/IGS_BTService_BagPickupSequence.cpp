#include "IGS_BTService_BagPickupSequence.h"
#include "IGS_LootBagPickup.h"

UIGS_BTService_BagPickupSequence::UIGS_BTService_BagPickupSequence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestPickupBag_Object_2147482603"), AIGS_LootBagPickup::StaticClass());
    (*this).BestPickupBag = gen;
    (*this).NodeName = TEXT("Bag Pickup Sequence");
}

