#pragma once
#include "CoreMinimal.h"
#include "RideableCarMove.generated.h"

USTRUCT()
struct FRideableCarMove {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Throttle;

    UPROPERTY(EditAnywhere)
    float SteeringThrow;

    UPROPERTY(EditAnywhere)
    bool Brake;

    UPROPERTY(EditAnywhere)
    float DeltaTime;

    UPROPERTY(EditAnywhere)
    float Time;

    BF_RIDEABLEVEHICLES_API FRideableCarMove();
};
