#include "IGS_BTService_WeaponPickupSequence.h"
#include "IGS_WeaponPickupActor.h"

UIGS_BTService_WeaponPickupSequence::UIGS_BTService_WeaponPickupSequence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestPickupWeapon_Object_2147482549"), AIGS_WeaponPickupActor::StaticClass());
    (*this).BestPickupWeapon = gen;
    (*this).NodeName = TEXT("Weapon Pickup Sequence");
}

