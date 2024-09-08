#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_FPSMissionInfo.h"
#include "META_DefenceMissionRowInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_DefenceMissionRowInfo {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag UnlockTag;
    
    FMETA_DefenceMissionRowInfo();
};

