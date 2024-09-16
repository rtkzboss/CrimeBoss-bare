#pragma once
#include "CoreMinimal.h"
#include "META_Chance.h"
#include "META_TradeRelationshipInfo.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_TradeRelationshipInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_Chance BetterPriceChance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_Chance NoDealChance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_Chance VendorAttackChance;

    FMETA_TradeRelationshipInfo();
};
