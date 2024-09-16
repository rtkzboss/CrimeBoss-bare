#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommandMoveTo.h"
#include "IGS_AICommandMoveToWaypoint.generated.h"

class AIGS_WaypointBase;

UCLASS()
class BF_AI_API UIGS_AICommandMoveToWaypoint : public UIGS_AICommandMoveTo {
    GENERATED_BODY()
public:
    UIGS_AICommandMoveToWaypoint();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<AIGS_WaypointBase> Waypoint;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ApproachDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ExactPosition;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsApproachMove;

};
