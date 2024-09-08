#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CartesianAxisRange.h"
#include "ECartesianScalingType.h"
#include "KantanCartesianPlotScale.generated.h"

USTRUCT(BlueprintType)
struct FKantanCartesianPlotScale {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECartesianScalingType Type;
    
    UPROPERTY(EditAnywhere)
    FVector2D Scale;
    
    UPROPERTY(EditAnywhere)
    FVector2D FocalCoordinates;
    
    UPROPERTY(EditAnywhere)
    FCartesianAxisRange RangeX;
    
    UPROPERTY(EditAnywhere)
    FCartesianAxisRange RangeY;
    
    KANTANCHARTSSLATE_API FKantanCartesianPlotScale();
};

