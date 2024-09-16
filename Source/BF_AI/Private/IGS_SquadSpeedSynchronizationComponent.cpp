#include "IGS_SquadSpeedSynchronizationComponent.h"

UIGS_SquadSpeedSynchronizationComponent::UIGS_SquadSpeedSynchronizationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.TickInterval = 3.000000119e-01f;
}

