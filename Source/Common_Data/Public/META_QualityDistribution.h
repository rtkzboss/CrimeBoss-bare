#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "META_QualityDistribution.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_QualityDistribution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EMETA_ItemQuality Quality;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Percentage;

    FMETA_QualityDistribution();
};
FORCEINLINE uint32 GetTypeHash(const FMETA_QualityDistribution&) { return 0; }
FORCEINLINE bool operator==(const FMETA_QualityDistribution&, const FMETA_QualityDistribution&) { return true; }
