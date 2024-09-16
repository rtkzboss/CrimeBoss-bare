#pragma once
#include "CoreMinimal.h"
#include "KantanTimeSeriesPlotBase.h"
#include "TimeSeriesPlot.generated.h"

class UObject;

UCLASS()
class KANTANCHARTSUMG_API UTimeSeriesPlot : public UKantanTimeSeriesPlotBase {
    GENERATED_BODY()
public:
    UTimeSeriesPlot();

    UFUNCTION(BlueprintCallable)
    bool SetDatasource(UObject* InDatasource);

protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    UObject* DataSource;

};
