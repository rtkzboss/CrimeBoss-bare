#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "Templates/SubclassOf.h"
#include "META_EquipmentScopeKey.generated.h"

class UIGS_EquipmentInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_EquipmentScopeKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UIGS_EquipmentInventoryObject> EquipmentClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EMETA_ItemQuality Quality;
    
    FMETA_EquipmentScopeKey();
};
FORCEINLINE uint32 GetTypeHash(const FMETA_EquipmentScopeKey) { return 0; }

