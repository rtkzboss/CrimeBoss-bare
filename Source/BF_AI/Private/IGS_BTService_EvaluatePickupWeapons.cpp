#include "IGS_BTService_EvaluatePickupWeapons.h"
#include "IGS_WeaponPickupActor.h"

UIGS_BTService_EvaluatePickupWeapons::UIGS_BTService_EvaluatePickupWeapons() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestWeaponPickup_Object_2147482588"), AIGS_WeaponPickupActor::StaticClass());
    (*this).BestWeaponPickup = gen;
    (*this).NodeName = TEXT("Evaluate Pickup Weapons");
}

