#include "IGS_BTTask_PickupActor.h"
#include "IGS_PickupActorBase.h"

UIGS_BTTask_PickupActor::UIGS_BTTask_PickupActor() {
    (*this).PickupDelay = 1.000000000e+00f;
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestPickupActor_Object_2147482497"), AIGS_PickupActorBase::StaticClass());
    (*this).BestPickupActor = gen;
    (*this).NodeName = TEXT("Pickup Actor");
}

