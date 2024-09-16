#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "META_ExtraBossEquipmentData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ExtraBossEquipmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AmountOfEquipment;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality Quality;

    FMETA_ExtraBossEquipmentData();
};
