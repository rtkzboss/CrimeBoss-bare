#pragma once
#include "CoreMinimal.h"
#include "EMETA_TaskStatus.h"
#include "META_TaskInfo.generated.h"

USTRUCT(BlueprintType)
struct FMETA_TaskInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Title;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CurrentValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NeedValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_TaskStatus Status;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOptional;

    CRIMEBOSSMETA_API FMETA_TaskInfo();
};
