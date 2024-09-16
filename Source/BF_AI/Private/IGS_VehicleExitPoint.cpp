#include "IGS_VehicleExitPoint.h"
#include "Components/SceneComponent.h"

AIGS_VehicleExitPoint::AIGS_VehicleExitPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).RootComponent = gen;
}

