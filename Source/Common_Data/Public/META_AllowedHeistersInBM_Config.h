#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "META_AllowedHeistersInBM_Config.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_AllowedHeistersInBM_Config {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_ItemQuality, int32> HeisterQualityPercent;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Amount;
    
    FMETA_AllowedHeistersInBM_Config();
};

