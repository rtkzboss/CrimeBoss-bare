#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_WeaponGenerationRestriction.h"
#include "META_ItemQualityBitmask.h"
#include "META_HeisterEconomyData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_HeisterEconomyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FMETA_Interval HireValueRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FMETA_Interval UpkeepValueRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FMETA_Interval MissionCutRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FMETA_ItemQualityBitmask WeaponQuality;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FMETA_WeaponGenerationRestriction WeaponGenerationRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FMETA_ItemQualityBitmask EquipmentQuality;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 EquipmentChance;
    
    FMETA_HeisterEconomyData();
};

