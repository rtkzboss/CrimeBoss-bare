#pragma once
#include "CoreMinimal.h"
#include "IGS_LootTaskInfo.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_LootTaskInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bPocketTask;
    
    FIGS_LootTaskInfo();
};

