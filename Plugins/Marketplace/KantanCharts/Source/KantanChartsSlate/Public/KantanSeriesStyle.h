#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KantanSeriesStyle.generated.h"

class UKantanPointStyle;

USTRUCT()
struct FKantanSeriesStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName StyleId;
    
    UPROPERTY(EditAnywhere)
    UKantanPointStyle* PointStyle;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Color;
    
    KANTANCHARTSSLATE_API FKantanSeriesStyle();
};

