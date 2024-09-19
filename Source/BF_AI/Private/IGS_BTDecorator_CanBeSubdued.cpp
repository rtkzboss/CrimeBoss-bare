#include "IGS_BTDecorator_CanBeSubdued.h"
#include "GameFramework/Actor.h"

UIGS_BTDecorator_CanBeSubdued::UIGS_BTDecorator_CanBeSubdued() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("TargetKey_Object_2147482637"), AActor::StaticClass());
    (*this).TargetKey = gen;
    (*this).NodeName = TEXT("Can Be Subdued");
}

