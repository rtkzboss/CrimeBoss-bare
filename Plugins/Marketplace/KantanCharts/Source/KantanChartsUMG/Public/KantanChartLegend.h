#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Components/Widget.h"
#include "KantanChartLegend.generated.h"

class UKantanCartesianChartBase;

UCLASS()
class KANTANCHARTSUMG_API UKantanChartLegend : public UWidget {
    GENERATED_BODY()
public:
    UKantanChartLegend();

    UFUNCTION(BlueprintCallable)
    void SetSeriesPadding(const FMargin& InPadding);

    UFUNCTION(BlueprintCallable)
    void SetMargins(const FMargin& InMargins);

    UFUNCTION(BlueprintCallable)
    void SetFontSize(int32 InFontSize);

    UFUNCTION(BlueprintCallable)
    void SetChart(UKantanCartesianChartBase* InChart);

    UFUNCTION(BlueprintCallable)
    void SetBackground(const FSlateBrush& InBrush);

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Margins;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin SeriesPadding;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush Background;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FontSize;

    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UKantanCartesianChartBase> Chart;

};
