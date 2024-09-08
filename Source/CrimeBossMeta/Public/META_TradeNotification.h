#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_TradeVendor.h"
#include "META_BaseNotification.h"
#include "META_TradeNotification.generated.h"

UCLASS()
class CRIMEBOSSMETA_API UMETA_TradeNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    EMETA_TradeVendor m_Vendor;
    
    UPROPERTY()
    FGameplayTag m_Loot;
    
    UPROPERTY()
    FText m_Money;
    
public:
    UMETA_TradeNotification();

    UFUNCTION(BlueprintCallable)
    void SetData(EMETA_TradeVendor inVendor, FGameplayTag inLoot, FText inMoney);
    
};

