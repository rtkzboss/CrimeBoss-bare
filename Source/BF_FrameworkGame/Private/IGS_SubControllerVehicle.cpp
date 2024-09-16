#include "IGS_SubControllerVehicle.h"

UIGS_SubControllerVehicle::UIGS_SubControllerVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

