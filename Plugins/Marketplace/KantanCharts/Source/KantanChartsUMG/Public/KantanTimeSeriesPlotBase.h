#pragma once
#include "CoreMinimal.h"
#include "CartesianRangeBound.h"
#include "KantanCartesianChartBase.h"
#include "KantanTimeSeriesPlotBase.generated.h"

UCLASS(Abstract)
class KANTANCHARTSUMG_API UKantanTimeSeriesPlotBase : public UKantanCartesianChartBase {
    GENERATED_BODY()
public:
    UKantanTimeSeriesPlotBase();

    UFUNCTION(BlueprintCallable)
    void SetUpperValueBound(FCartesianRangeBound InUpperBound);
    
    UFUNCTION(BlueprintCallable)
    void SetUpperTimeBound(FCartesianRangeBound InUpperBound);
    
    UFUNCTION(BlueprintCallable)
    void SetLowerValueBound(FCartesianRangeBound InLowerBound);
    
    UFUNCTION(BlueprintCallable)
    void SetLowerTimeBound(FCartesianRangeBound InLowerBound);
    
    UPROPERTY(EditAnywhere)
    bool bUseFixedTimeRange;
    
    UPROPERTY(EditAnywhere)
    float DisplayTimeRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCartesianRangeBound LowerTimeBound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCartesianRangeBound UpperTimeBound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCartesianRangeBound LowerValueBound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCartesianRangeBound UpperValueBound;
    
    UPROPERTY(EditAnywhere)
    bool bExtendValueRangeToZero;
    
};

