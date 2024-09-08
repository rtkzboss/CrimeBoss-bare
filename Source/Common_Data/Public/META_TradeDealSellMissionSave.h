#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_BaseMissionSave.h"
#include "META_TradeDealSellMissionSave.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_TradeDealSellMissionSave : public FMETA_BaseMissionSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag LootTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LootAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Price;
    
    FMETA_TradeDealSellMissionSave();
};

