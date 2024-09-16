#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "META_ExtraBossWeaponsData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ExtraBossWeaponsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AmountOfWeapons;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality Quality;

    FMETA_ExtraBossWeaponsData();
};
