#pragma once
#include "CoreMinimal.h"
#include "META_WarehouseWealthData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_WarehouseWealthData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MultiplierOfMissionReward;

    FMETA_WarehouseWealthData();
};
