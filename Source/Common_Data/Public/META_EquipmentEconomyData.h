#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "META_EquipmentEconomyData.generated.h"

class UIGS_EquipmentInventoryObject;

USTRUCT()
struct COMMON_DATA_API FMETA_EquipmentEconomyData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<TSubclassOf<UIGS_EquipmentInventoryObject>, int32> EquipmentCost;
    
    FMETA_EquipmentEconomyData();
};

