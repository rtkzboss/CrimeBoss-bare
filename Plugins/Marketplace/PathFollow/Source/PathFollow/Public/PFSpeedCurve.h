#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PFSpeedCurve.generated.h"

USTRUCT(BlueprintType)
struct PATHFOLLOW_API FPFSpeedCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInterpCurveFloat _speedCurve;
    
    FPFSpeedCurve();
};

