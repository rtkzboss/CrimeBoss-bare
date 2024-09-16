#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "META_FloatInterval.h"
#include "IGS_UnlockItemCost.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_UnlockItemCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseCategoryCostMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_ItemQuality, FMETA_FloatInterval> QualityCostMultipliers;

    FIGS_UnlockItemCost();
};
