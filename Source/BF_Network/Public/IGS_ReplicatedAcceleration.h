#pragma once
#include "CoreMinimal.h"
#include "IGS_ReplicatedAcceleration.generated.h"

USTRUCT()
struct FIGS_ReplicatedAcceleration {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 AccelXYRadians;
    
    UPROPERTY()
    uint8 AccelXYMagnitude;
    
    UPROPERTY()
    int8 AccelZ;
    
    BF_NETWORK_API FIGS_ReplicatedAcceleration();
};

