#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CategoryStyleManualMapping.h"
#include "KantanChart.h"
#include "KantanCategoryChart.generated.h"

class UKantanCategoryStyleSet;

UCLASS(Abstract)
class KANTANCHARTSUMG_API UKantanCategoryChart : public UKantanChart {
    GENERATED_BODY()
public:
    UKantanCategoryChart();

    UFUNCTION(BlueprintCallable)
    void AddCategoryStyleOverride(FName CategoryId, FLinearColor Color);

    UPROPERTY(EditAnywhere)
    bool bAutoPerCategoryStyles;

    UPROPERTY(AdvancedDisplay, EditAnywhere)
    UKantanCategoryStyleSet* CategoryStyleSet;

    UPROPERTY(EditAnywhere)
    TArray<FCategoryStyleManualMapping> ManualStyleMappings;

};
