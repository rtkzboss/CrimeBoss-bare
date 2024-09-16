#pragma once
#include "CoreMinimal.h"
#include "EMETA_TaskStatus.h"
#include "META_TaskStativeInfo.generated.h"

USTRUCT(BlueprintType)
struct FMETA_TaskStativeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CurrentValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NeedValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_TaskStatus Status;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOptional;

    PAYBACKDEFINITIONS_API FMETA_TaskStativeInfo();
};
