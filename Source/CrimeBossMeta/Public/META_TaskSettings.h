#pragma once
#include "CoreMinimal.h"
#include "META_TaskSettings.generated.h"

USTRUCT(BlueprintType)
struct FMETA_TaskSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 NodeId;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bShouldBeRemovedFromTaskListAfterExecution;
    
    CRIMEBOSSMETA_API FMETA_TaskSettings();
};

