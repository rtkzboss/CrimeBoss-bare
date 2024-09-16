#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "IGS_EquipmentInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "META_EquipmentScopeKey.generated.h"

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
FORCEINLINE uint32 GetTypeHash(const FMETA_EquipmentScopeKey&) { return 0; }
FORCEINLINE bool operator==(const FMETA_EquipmentScopeKey&, const FMETA_EquipmentScopeKey&) { return true; }
