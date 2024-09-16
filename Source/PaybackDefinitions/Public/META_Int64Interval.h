#pragma once
#include "CoreMinimal.h"
#include "META_Int64Interval.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_Int64Interval {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int64 Min;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int64 Max;

    FMETA_Int64Interval();
};
