#include "IGS_WeaponAccuracyComponent.h"

UIGS_WeaponAccuracyComponent::UIGS_WeaponAccuracyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MovementMultiplier = 1.000000000e+00f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

float UIGS_WeaponAccuracyComponent::GetCurrentSpreadConeHalfAngleInRadians() const {
    return 0.000000000e+00f;
}

