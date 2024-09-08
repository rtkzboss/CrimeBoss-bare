#pragma once
#include "CoreMinimal.h"
#include "META_Interval.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_Interval {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Max;
    
    FMETA_Interval();
};

