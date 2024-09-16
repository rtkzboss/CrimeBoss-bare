#include "HoudiniInstancedActorComponent.h"
#include "Engine/EngineTypes.h"

UHoudiniInstancedActorComponent::UHoudiniInstancedActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Mobility = EComponentMobility::Static;
    (*this).bCanEverAffectNavigation = true;
}

