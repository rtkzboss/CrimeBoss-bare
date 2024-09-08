#pragma once
#include "CoreMinimal.h"
#include "KantanChartStyle.h"
#include "KantanBarChartStyle.generated.h"

USTRUCT(BlueprintType)
struct KANTANCHARTSSLATE_API FKantanBarChartStyle : public FKantanChartStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BarOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BarOutlineOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BarOutlineThickness;
    
    FKantanBarChartStyle();
};

