#include "BTTask_InterpolateTo.h"

UBTTask_InterpolateTo::UBTTask_InterpolateTo() {
    (*this).InterpolationSpeed = 1.000000000e+00f;
    (*this).MovingCharacterVsHeistersCollisionStatus = EIGS_CharacterVsHeistersCollisionStatus::CharacterIgnoringPlayers;
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Interpolate To");
}

