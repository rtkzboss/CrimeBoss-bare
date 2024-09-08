#pragma once
#include "CoreMinimal.h"
#include "IGS_OrTaskInfo.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_OrTaskInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TaskA_ID;
    
    UPROPERTY()
    int32 TaskB_ID;
    
    FIGS_OrTaskInfo();
};

