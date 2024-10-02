#include "IGS_ShooterHelpers.h"

UIGS_ShooterHelpers::UIGS_ShooterHelpers() {
}

FVector UIGS_ShooterHelpers::GetVelocityInLocalSpaceOfTransform(FVector inVelocity, FTransform InTransform) {
    return FVector{};
}

FTransform UIGS_ShooterHelpers::GetMuzzleTransform(AIGS_GameCharacterFramework* inOwner, AIGS_WeaponBase* inWeapon) {
    return FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
}

