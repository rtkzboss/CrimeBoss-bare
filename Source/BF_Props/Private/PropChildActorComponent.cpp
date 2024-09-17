#include "PropChildActorComponent.h"

UPropChildActorComponent::UPropChildActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SetIsReplicated(true);
}

