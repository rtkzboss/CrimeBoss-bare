#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PowerIKBoneBendDirection.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKBoneBendDirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector BendDirection;
    
    FPowerIKBoneBendDirection();
};

