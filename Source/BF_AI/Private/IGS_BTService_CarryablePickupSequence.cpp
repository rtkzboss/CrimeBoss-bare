#include "IGS_BTService_CarryablePickupSequence.h"
#include "IGS_CarryableItemPickup.h"

UIGS_BTService_CarryablePickupSequence::UIGS_BTService_CarryablePickupSequence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestCarryablePickup_Object_2147482600"), AIGS_CarryableItemPickup::StaticClass());
    (*this).BestCarryablePickup = gen;
    (*this).NodeName = TEXT("Weapon Pickup Sequence");
}

