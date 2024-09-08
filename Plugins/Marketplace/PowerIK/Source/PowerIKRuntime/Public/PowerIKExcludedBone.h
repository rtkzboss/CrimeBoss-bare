#pragma once
#include "CoreMinimal.h"
#include "PowerIKExcludedBone.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKExcludedBone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName BoneName;
    
    FPowerIKExcludedBone();
};

