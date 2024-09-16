#pragma once
#include "CoreMinimal.h"
#include "CartesianAxisInstanceConfig.h"
#include "CartesianAxisConfig.generated.h"

USTRUCT(BlueprintType)
struct FCartesianAxisConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Title;

    UPROPERTY(EditAnywhere)
    FText Unit;

    UPROPERTY(EditAnywhere)
    float MarkerSpacing;

    UPROPERTY(EditAnywhere)
    int32 MaxValueDigits;

    UPROPERTY(EditAnywhere)
    FCartesianAxisInstanceConfig LeftBottomAxis;

    UPROPERTY(EditAnywhere)
    FCartesianAxisInstanceConfig RightTopAxis;

    UPROPERTY(EditAnywhere)
    FCartesianAxisInstanceConfig FloatingAxis;

    KANTANCHARTSSLATE_API FCartesianAxisConfig();
};
