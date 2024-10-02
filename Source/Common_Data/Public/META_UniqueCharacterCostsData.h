#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_RespectLvl.h"
#include "META_FloatInterval.h"
#include "META_Interval.h"
#include "META_UniqueCharacterCostsData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_UniqueCharacterCostsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EMETA_ItemQuality, FMETA_Interval> BaseHireCostRangePerCharacterQuality;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_RespectLvl, float> HireCostMultiplierPerRespect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_FloatInterval UpkeepMultiplier;

    FMETA_UniqueCharacterCostsData();
};
