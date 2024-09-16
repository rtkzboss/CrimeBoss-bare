#include "IGS_FootstepsEventBasedComponent.h"

UIGS_FootstepsEventBasedComponent::UIGS_FootstepsEventBasedComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
}

