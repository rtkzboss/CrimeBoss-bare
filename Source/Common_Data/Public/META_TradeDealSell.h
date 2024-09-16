#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_TradeVendor.h"
#include "META_BaseMission.h"
#include "META_TradeDealSellMissionRowInfo.h"
#include "META_TradeDealSellMissionSave.h"
#include "META_TradeDealSell.generated.h"

UCLASS()
class COMMON_DATA_API UMETA_TradeDealSell : public UMETA_BaseMission {
    GENERATED_BODY()
public:
    UMETA_TradeDealSell();

    UFUNCTION(BlueprintCallable)
    void SetPrice(int32 inPrice);

    UFUNCTION(BlueprintCallable)
    void SetLootAmount(int32 inLootAmount);

    UFUNCTION(BlueprintCallable)
    void SetLoot(FGameplayTag inLootTag);

    UFUNCTION(BlueprintCallable)
    void SetDataFromSave(const FMETA_TradeDealSellMissionSave& inTradeMissionSave);

    UFUNCTION(BlueprintPure)
    EMETA_TradeVendor GetVendor();

    UFUNCTION(BlueprintCallable)
    FMETA_TradeDealSellMissionSave GetSaveData();

    UFUNCTION(BlueprintPure)
    int32 GetPrice();

    UFUNCTION(BlueprintPure)
    int32 GetLootAmount();

    UFUNCTION(BlueprintPure)
    FGameplayTag GetLoot();

    UFUNCTION(BlueprintPure)
    FMETA_TradeDealSellMissionRowInfo GetInfo() const;

private:
    UPROPERTY()
    FMETA_TradeDealSellMissionSave m_TradeDealMissionSave;

};
