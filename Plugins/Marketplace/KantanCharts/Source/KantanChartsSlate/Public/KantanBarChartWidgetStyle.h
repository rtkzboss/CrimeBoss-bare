#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "KantanBarChartStyle.h"
#include "KantanBarChartWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class UKantanBarChartWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UKantanBarChartWidgetStyle();

    UPROPERTY(EditAnywhere)
    FKantanBarChartStyle ChartStyle;

};
