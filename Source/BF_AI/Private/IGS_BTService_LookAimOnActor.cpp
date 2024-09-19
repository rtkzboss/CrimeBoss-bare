#include "IGS_BTService_LookAimOnActor.h"
#include "GameFramework/Actor.h"

UIGS_BTService_LookAimOnActor::UIGS_BTService_LookAimOnActor() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("ActorKey_Object_2147482571"), AActor::StaticClass());
    (*this).ActorKey = gen;
    (*this).NodeName = TEXT("Look Aim On Actor");
}

