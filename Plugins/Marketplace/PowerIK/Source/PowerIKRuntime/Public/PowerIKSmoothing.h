#pragma once
#include "CoreMinimal.h"
#include "PowerIKSmoothing.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKSmoothing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SmoothPositionOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPositionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPositionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SmoothRotationOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDegreesSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDegreesDistance;
    
    FPowerIKSmoothing();
};

