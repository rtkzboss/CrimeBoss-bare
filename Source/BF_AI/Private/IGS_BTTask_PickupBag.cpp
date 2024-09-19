#include "IGS_BTTask_PickupBag.h"
#include "IGS_LootBagPickup.h"

UIGS_BTTask_PickupBag::UIGS_BTTask_PickupBag() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestPickupBag_Object_2147482496"), AIGS_LootBagPickup::StaticClass());
    (*this).BestPickupBag = gen;
    (*this).NodeName = TEXT("Pickup Bag");
}

