#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CartesianAxisConfig.h"
#include "CartesianAxisRange.h"
#include "EKantanDataPointSize.h"
#include "KantanCartesianChartStyle.h"
#include "KantanCartesianPlotScale.h"
#include "Layout/Margin.h"
#include "KantanChart.h"
#include "SeriesStyleManualMapping.h"
#include "KantanCartesianChartBase.generated.h"

class UKantanPointStyle;
class UKantanSeriesStyleSet;

UCLASS(Abstract)
class KANTANCHARTSUMG_API UKantanCartesianChartBase : public UKantanChart {
    GENERATED_BODY()
public:
    UKantanCartesianChartBase();

    UFUNCTION(BlueprintCallable)
    void SetYAxisConfig(const FCartesianAxisConfig& InCfg);
    
    UFUNCTION(BlueprintCallable)
    void SetXAxisConfig(const FCartesianAxisConfig& InCfg);
    
    UFUNCTION(BlueprintCallable)
    void SetPlotScaleByRange(const FCartesianAxisRange& InRangeX, const FCartesianAxisRange& InRangeY);
    
    UFUNCTION(BlueprintCallable)
    void SetPlotScale(const FVector2D& InScale, const FVector2D& InFocalCoords);
    
    UFUNCTION(BlueprintCallable)
    void SetDataPointSize(EKantanDataPointSize InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetAxisTitlePadding(const FMargin& InPadding);
    
    UFUNCTION(BlueprintCallable)
    void EnableSeries(FName ID, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ConfigureSeries(FName ID, bool bDrawPoints, bool bDrawLines);
    
    UFUNCTION(BlueprintCallable)
    void AddSeriesStyleOverride(FName SeriesId, UKantanPointStyle* PointStyle, FLinearColor Color);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKantanCartesianChartStyle WidgetStyle;
    
    UPROPERTY(EditAnywhere)
    FKantanCartesianPlotScale PlotScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EKantanDataPointSize DataPointSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCartesianAxisConfig XAxisCfg;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCartesianAxisConfig YAxisCfg;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin AxisTitlePadding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    UKantanSeriesStyleSet* SeriesStyleSet;
    
    UPROPERTY(EditAnywhere)
    TArray<FSeriesStyleManualMapping> ManualStyleMappings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bAntiAlias;
    
};

