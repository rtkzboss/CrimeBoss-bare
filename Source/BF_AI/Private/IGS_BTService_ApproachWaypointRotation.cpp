#include "IGS_BTService_ApproachWaypointRotation.h"

UIGS_BTService_ApproachWaypointRotation::UIGS_BTService_ApproachWaypointRotation() {
    (*this).WaypointKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).WaypointKey, 0)) = 255;
    (*this).ApproachNotifiedKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ApproachNotifiedKey, 0)) = 255;
    (*this).OutRotationKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OutRotationKey, 0)) = 255;
    (*this).NodeName = TEXT("Approach To Waypoint Rotation");
}

