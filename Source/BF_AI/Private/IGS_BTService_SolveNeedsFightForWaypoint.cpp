#include "IGS_BTService_SolveNeedsFightForWaypoint.h"

UIGS_BTService_SolveNeedsFightForWaypoint::UIGS_BTService_SolveNeedsFightForWaypoint() {
    (*this).NeedsFightForWaypoint.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).NeedsFightForWaypoint, 0)) = 255;
    (*this).NodeName = TEXT("Solve Needs Fight For Waypoint");
}

