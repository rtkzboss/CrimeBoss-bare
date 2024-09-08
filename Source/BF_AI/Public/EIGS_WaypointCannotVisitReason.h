#pragma once
#include "CoreMinimal.h"
#include "EIGS_WaypointCannotVisitReason.generated.h"

UENUM()
enum class EIGS_WaypointCannotVisitReason {
    Reason_UNKNOWN = 255,
    Reason_PointIsLocked = 0,
    Reason_WrongTeamside,
    Reason_NoVisitor,
    Reason_PatrolGroupIsFull,
    Reason_PointDisabled,
    Reason_CanVisit = 127,
    Reason_Other,
};

