#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PowerIKGroundFoot.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKGroundFoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PullWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NormalizePulling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PositivePullFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector NegativePullFactor;
    
    FPowerIKGroundFoot();
};

