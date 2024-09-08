#pragma once
#include "CoreMinimal.h"
#include "EMETA_TaskStatus.h"
#include "META_TaskInfoSave.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_TaskInfoSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_TaskStatus Status;
    
    FMETA_TaskInfoSave();
};

