#pragma once
#include "CoreMinimal.h"
#include "EMETA_PlotlineGraphStartTime.h"
#include "META_PlotlineGraphStartTime.generated.h"

USTRUCT(BlueprintType)
struct FMETA_PlotlineGraphStartTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_PlotlineGraphStartTime Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinDay;
    
    PAYBACKDEFINITIONS_API FMETA_PlotlineGraphStartTime();
};

