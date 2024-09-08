#pragma once
#include "CoreMinimal.h"
#include "ConstraintRanges.generated.h"

USTRUCT()
struct FConstraintRanges {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinimumValue;
    
    UPROPERTY(EditAnywhere)
    float MaximumValue;
    
    UPROPERTY(EditAnywhere)
    int32 RangeWeight;
    
    CUSTOMIZABLEOBJECTPOPULATION_API FConstraintRanges();
};

