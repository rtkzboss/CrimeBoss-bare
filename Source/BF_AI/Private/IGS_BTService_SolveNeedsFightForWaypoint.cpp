#include "IGS_BTService_SolveNeedsFightForWaypoint.h"

UIGS_BTService_SolveNeedsFightForWaypoint::UIGS_BTService_SolveNeedsFightForWaypoint() {
    FBlackboardKeySelector gen;
    gen.AddBoolFilter(this, TEXT("NeedsFightForWaypoint"));
    (*this).NeedsFightForWaypoint = gen;
    (*this).NodeName = TEXT("Solve Needs Fight For Waypoint");
}

