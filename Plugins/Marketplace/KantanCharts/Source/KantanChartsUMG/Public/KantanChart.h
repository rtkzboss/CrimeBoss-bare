#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Components/Widget.h"
#include "KantanChart.generated.h"

UCLASS(Abstract)
class KANTANCHARTSUMG_API UKantanChart : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Margins;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ChartTitle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin TitlePadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UpdateTickRate;
    
    UKantanChart();

    UFUNCTION(BlueprintCallable)
    void SetUpdateTickRate(float InRate);
    
    UFUNCTION(BlueprintCallable)
    void SetMargins(const FMargin& InMargins);
    
    UFUNCTION(BlueprintCallable)
    void SetChartTitlePadding(const FMargin& InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetChartTitle(const FText& InTitle);
    
};

