#pragma once
#include "CoreMinimal.h"
#include "CartesianAxisConfig.h"
#include "EKantanBarChartOrientation.h"
#include "EKantanBarLabelPosition.h"
#include "EKantanBarValueExtents.h"
#include "KantanBarChartStyle.h"
#include "KantanCategoryChart.h"
#include "KantanBarChartBase.generated.h"

UCLASS(Abstract)
class KANTANCHARTSUMG_API UKantanBarChartBase : public UKantanCategoryChart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKantanBarChartStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EKantanBarChartOrientation Orientation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxBarValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EKantanBarLabelPosition LabelPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BarToGapRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EKantanBarValueExtents ValueExtentsDisplay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCartesianAxisConfig ValueAxisCfg;
    
    UKantanBarChartBase();

    UFUNCTION(BlueprintCallable)
    void SetValueAxisConfig(const FCartesianAxisConfig& InCfg);
    
    UFUNCTION(BlueprintCallable)
    void SetOrientation(EKantanBarChartOrientation InOrientation);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxBarValue(float InMaxValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLabelPosition(EKantanBarLabelPosition InPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetExtentsDisplay(EKantanBarValueExtents InExtents);
    
    UFUNCTION(BlueprintCallable)
    void SetBarToGapRatio(float InRatio);
    
};

