#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RideableCarMove.h"
#include "RideableCarState.generated.h"

USTRUCT()
struct FRideableCarState {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Tranform;

    UPROPERTY()
    FVector Velocity;

    UPROPERTY()
    FRideableCarMove LastMove;

    BF_RIDEABLEVEHICLES_API FRideableCarState();
};
