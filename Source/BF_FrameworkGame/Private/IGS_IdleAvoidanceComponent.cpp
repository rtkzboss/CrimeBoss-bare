#include "IGS_IdleAvoidanceComponent.h"

UIGS_IdleAvoidanceComponent::UIGS_IdleAvoidanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).VelocityTreshold = 5.000000000e+01f;
    (*this).AvoidanceWeihgtOverride = -1.000000000e+00f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.TickInterval = 2.000000030e-01f;
}

