#pragma once
#include "CoreMinimal.h"
#include "META_IntervalWithChance.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_IntervalWithChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IncreasingChanceInsideRange;
    
    FMETA_IntervalWithChance();
};

