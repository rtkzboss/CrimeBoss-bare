#include "PropMeshComponent.h"

UPropMeshComponent::UPropMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).StaticMeshPtr = FSoftObjectPath();
}

