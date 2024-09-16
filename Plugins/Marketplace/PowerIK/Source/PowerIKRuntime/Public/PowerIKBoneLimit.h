#pragma once
#include "CoreMinimal.h"
#include "PowerIKBoneLimit.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKBoneLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName BoneName;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Stiffness;

    FPowerIKBoneLimit();
};
