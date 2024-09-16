#include "IGS_BTTask_MoveToWaypoint.h"

UIGS_BTTask_MoveToWaypoint::UIGS_BTTask_MoveToWaypoint() {
    (*this).WaypointKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).WaypointKey, 0)) = 255;
    (*this).IsApproachMoveKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).IsApproachMoveKey, 0)) = 255;
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Move To Waypoint");
}

