#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_PawnShopTrendData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_PawnShopTrendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_Interval TrendDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_Interval TrendCooldown;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_Interval MaximumDailyChange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaximumChangeForPositiveTrend;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaximumChangeForNegativeTrend;

    FMETA_PawnShopTrendData();
};
