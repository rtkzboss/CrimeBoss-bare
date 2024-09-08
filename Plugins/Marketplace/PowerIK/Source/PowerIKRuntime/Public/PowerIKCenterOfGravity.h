#pragma once
#include "CoreMinimal.h"
#include "PowerIKCenterOfGravity.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKCenterOfGravity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HorizAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VertAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PullBodyAmount;
    
    FPowerIKCenterOfGravity();
};

