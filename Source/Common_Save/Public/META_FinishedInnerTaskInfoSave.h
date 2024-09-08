#pragma once
#include "CoreMinimal.h"
#include "META_TaskStativeInfo.h"
#include "META_FinishedInnerTaskInfoSave.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_FinishedInnerTaskInfoSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* TaskClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_TaskStativeInfo Info;
    
    FMETA_FinishedInnerTaskInfoSave();
};

