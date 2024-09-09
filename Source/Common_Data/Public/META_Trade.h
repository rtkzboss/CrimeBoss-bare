#pragma once
#include "CoreMinimal.h"
#include "META_BaseMission.h"
#include "META_TradeExpense.h"
#include "META_TradeMissionRowInfo.h"
#include "META_TradeMissionSave.h"
#include "META_Trade.generated.h"

UCLASS()
class COMMON_DATA_API UMETA_Trade : public UMETA_BaseMission {
    GENERATED_BODY()
public:
    UMETA_Trade();

    UFUNCTION(BlueprintCallable)
    void SetDataFromSave(const FMETA_TradeMissionSave& inTradeMissionSave);
    
    UFUNCTION(BlueprintPure)
    TArray<FMETA_TradeExpense> GetTradeExpenses() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_TradeMissionSave GetSaveData();
    
    UFUNCTION(BlueprintPure)
    FMETA_TradeMissionRowInfo GetInfo() const;
    
private:
    UPROPERTY()
    FMETA_TradeMissionSave m_TradeMissionSave;
    
};

