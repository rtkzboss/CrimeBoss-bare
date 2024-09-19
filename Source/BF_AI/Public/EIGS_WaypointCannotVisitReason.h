#pragma once
#include "CoreMinimal.h"
#include "EIGS_WaypointCannotVisitReason.generated.h"

UENUM(BlueprintType)
enum class EIGS_WaypointCannotVisitReason : uint8 {
    Reason_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
    Reason_PointIsLocked = 0 UMETA(DisplayName="Point Is Locked"),
    Reason_WrongTeamside UMETA(DisplayName="Wrong Teamside"),
    Reason_NoVisitor UMETA(DisplayName="No Visitor"),
    Reason_PatrolGroupIsFull UMETA(DisplayName="Patrol Group Is Full"),
    Reason_PointDisabled UMETA(DisplayName="Point Disabled"),
    Reason_CanVisit = 127 UMETA(DisplayName="Can Visit"),
    Reason_Other UMETA(DisplayName=Other),
};
