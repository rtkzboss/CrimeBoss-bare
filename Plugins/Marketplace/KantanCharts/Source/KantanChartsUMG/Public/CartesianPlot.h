#pragma once
#include "CoreMinimal.h"
#include "KantanCartesianPlotBase.h"
#include "CartesianPlot.generated.h"

class UObject;

UCLASS()
class KANTANCHARTSUMG_API UCartesianPlot : public UKantanCartesianPlotBase {
    GENERATED_BODY()
public:
    UCartesianPlot();

    UFUNCTION(BlueprintCallable)
    bool SetDatasource(UObject* InDatasource);
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    UObject* DataSource;
    
};

