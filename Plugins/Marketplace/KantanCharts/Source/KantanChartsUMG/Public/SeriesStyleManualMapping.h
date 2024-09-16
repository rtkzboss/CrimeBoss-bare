#pragma once
#include "CoreMinimal.h"
#include "KantanSeriesStyle.h"
#include "SeriesStyleManualMapping.generated.h"

USTRUCT()
struct FSeriesStyleManualMapping {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SeriesId;

    UPROPERTY(EditAnywhere)
    FKantanSeriesStyle Style;

    KANTANCHARTSUMG_API FSeriesStyleManualMapping();
};
