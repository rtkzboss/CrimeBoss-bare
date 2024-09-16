#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_RandEventCategoryConfig.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_RandEventCategoryConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseChance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChanceIncrease;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxChance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_Interval CooldownInDays;

    FMETA_RandEventCategoryConfig();
};
