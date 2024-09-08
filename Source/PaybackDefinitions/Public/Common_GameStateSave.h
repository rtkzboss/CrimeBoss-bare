#pragma once
#include "CoreMinimal.h"
#include "Common_GameStateSave.generated.h"

USTRUCT()
struct PAYBACKDEFINITIONS_API FCommon_GameStateSave {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 HeatAmount;
    
    FCommon_GameStateSave();
};

