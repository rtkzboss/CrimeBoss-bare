#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "META_AllowedWeaponsInfo.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_AllowedWeaponsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxNumberOfWeapons;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, int32> WeaponClassChance;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_ItemQuality, int32> WeaponQualityChance;
    
    FMETA_AllowedWeaponsInfo();
};

