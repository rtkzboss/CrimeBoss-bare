#pragma once
#include "CoreMinimal.h"
#include "META_TradeSettings.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_TradeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 MinMonetaryTradeValue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 MaxMonetaryTradeValue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 DailyLimitMonetaryTradeValueForPawnShop;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 BaseInvestigationValueAfterExceededPawnShopLimit;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 MaxInvestigationValueAfterExceededPawnShopLimit;
    
    FMETA_TradeSettings();
};

