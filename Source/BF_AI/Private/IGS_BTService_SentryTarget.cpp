#include "IGS_BTService_SentryTarget.h"
#include "IGS_GameCharacterFramework.h"

UIGS_BTService_SentryTarget::UIGS_BTService_SentryTarget() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestTarget_Object_2147482563"), AIGS_GameCharacterFramework::StaticClass());
    (*this).BestTarget = gen;
    (*this).NodeName = TEXT("Evaluate Best Target");
}

