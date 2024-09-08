#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "KantanCartesianChartStyle.h"
#include "KantanCartesianChartWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class UKantanCartesianChartWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FKantanCartesianChartStyle ChartStyle;
    
    UKantanCartesianChartWidgetStyle();

};

