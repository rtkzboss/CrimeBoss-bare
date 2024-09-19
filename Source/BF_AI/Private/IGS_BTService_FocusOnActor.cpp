#include "IGS_BTService_FocusOnActor.h"
#include "GameFramework/Actor.h"

UIGS_BTService_FocusOnActor::UIGS_BTService_FocusOnActor() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("ActorKey_Object_2147482583"), AActor::StaticClass());
    (*this).ActorKey = gen;
    (*this).NodeName = TEXT("Focus On Actor");
}

