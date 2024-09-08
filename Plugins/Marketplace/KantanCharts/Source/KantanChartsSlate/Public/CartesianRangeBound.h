#pragma once
#include "CoreMinimal.h"
#include "ECartesianRangeBoundType.h"
#include "CartesianRangeBound.generated.h"

USTRUCT(BlueprintType)
struct FCartesianRangeBound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECartesianRangeBoundType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FixedBoundValue;
    
    KANTANCHARTSSLATE_API FCartesianRangeBound();
};

