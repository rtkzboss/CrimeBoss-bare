#pragma once
#include "CoreMinimal.h"
#include "CartesianAxisRange.generated.h"

USTRUCT(BlueprintType)
struct FCartesianAxisRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Min;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Max;

    KANTANCHARTSSLATE_API FCartesianAxisRange();
};
