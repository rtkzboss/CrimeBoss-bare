#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_PressureDebugWidget.generated.h"

class AIGS_MainHUD;
class UBorder;
class UEditableTextBox;
class UIGS_HUDKantanDatasourceHolder;
class UIGS_PressureManager;
class UIGS_WaveManager;
class UKantanPointStyle;
class UTimeSeriesPlot;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_PressureDebugWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UTimeSeriesPlot* PlotDS;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBorder* GraphBorder;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UEditableTextBox* CurrPressure;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UEditableTextBox* ExpectedPressure;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UEditableTextBox* SpawnIntensity;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UEditableTextBox* IsActive;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UEditableTextBox* LastSegmentInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UKantanPointStyle* PointPlotStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor PressureColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor LegendColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor GreyLegendColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsMessurmentActive;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<UIGS_PressureManager> PressureManager;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_WaveManager> WaveManager;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_MainHUD> HUD;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_HUDKantanDatasourceHolder> KantanDatasourceHolder;
    
public:
    UIGS_PressureDebugWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSegmentTimeReset();
    
};

