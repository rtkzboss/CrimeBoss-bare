#pragma once
#include "CoreMinimal.h"
#include "IGS_EquipmentInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "META_EquipmentCachedData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_EquipmentCachedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UIGS_EquipmentInventoryObject> EquipmentItem;

    FMETA_EquipmentCachedData();
};
