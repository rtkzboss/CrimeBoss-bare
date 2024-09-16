#include "IGS_CustomSphereComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

UIGS_CustomSphereComponent::UIGS_CustomSphereComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).LineThickness = 2.000000000e+00f;
    (*this).AreaClass = UNavArea_Obstacle::StaticClass();
    (*this).bHiddenInGame = false;
}

