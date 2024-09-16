#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_GangTradeInfo.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GangTradeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, float> CommoditiesWithPriceBonus;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer BannedCommodities;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DayCooldownAfterFailTrade;

    FMETA_GangTradeInfo();
};
