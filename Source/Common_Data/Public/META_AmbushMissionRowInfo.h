#pragma once
#include "CoreMinimal.h"
#include "META_FPSMissionInfo.h"
#include "META_AmbushMissionRowInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_AmbushMissionRowInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Picture;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> MapIconOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_FPSMissionInfo FPSMissionInfo;

    FMETA_AmbushMissionRowInfo();
};
