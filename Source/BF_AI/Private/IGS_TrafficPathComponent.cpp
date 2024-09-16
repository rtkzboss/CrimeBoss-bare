#include "IGS_TrafficPathComponent.h"

UIGS_TrafficPathComponent::UIGS_TrafficPathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ShowCustomColors = true;
    (*this).Weight = 1.000000000e+00f;
}

bool UIGS_TrafficPathComponent::IsEnabled() const {
    return false;
}

