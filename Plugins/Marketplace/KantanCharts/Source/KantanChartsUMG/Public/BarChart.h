#pragma once
#include "CoreMinimal.h"
#include "KantanBarChartBase.h"
#include "BarChart.generated.h"

class UObject;

UCLASS()
class KANTANCHARTSUMG_API UBarChart : public UKantanBarChartBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    UObject* DataSource;
    
public:
    UBarChart();

    UFUNCTION(BlueprintCallable)
    bool SetDatasource(UObject* InDatasource);
    
};

