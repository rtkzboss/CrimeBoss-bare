#include "IGS_BTService_SentryRotateToActor.h"
#include "GameFramework/Actor.h"

UIGS_BTService_SentryRotateToActor::UIGS_BTService_SentryRotateToActor() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("TargetActor_Object_2147482564"), AActor::StaticClass());
    (*this).TargetActor = gen;
    (*this).NodeName = TEXT("Sentry Rotate To Actor");
}

