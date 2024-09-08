#pragma once
#include "CoreMinimal.h"
#include "META_PawnShopTrendDataRuntime.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_PawnShopTrendDataRuntime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsPositive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CurrentTrendDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CurrentTrendCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CurrentPriceChange;
    
    FMETA_PawnShopTrendDataRuntime();
};

