#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "Templates/SubclassOf.h"
#include "META_AllowedEquipmentInfo.generated.h"

class UIGS_EquipmentInventoryObject;

USTRUCT()
struct COMMON_DATA_API FMETA_AllowedEquipmentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxNumberOfEquipment;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TSubclassOf<UIGS_EquipmentInventoryObject>, int32> EquipmentClassChance;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_ItemQuality, int32> EquipmentQualityChance;
    
    FMETA_AllowedEquipmentInfo();
};

