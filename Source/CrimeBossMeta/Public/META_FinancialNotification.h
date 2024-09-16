#pragma once
#include "CoreMinimal.h"
#include "META_BaseNotification.h"
#include "META_FinancialNotification.generated.h"

UCLASS()
class CRIMEBOSSMETA_API UMETA_FinancialNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
    UMETA_FinancialNotification();

    UFUNCTION(BlueprintCallable)
    void SetMoney(int32 inMoney, bool inShowAbsolute);

    UFUNCTION(BlueprintPure)
    int32 GetMoney() const;

private:
    UPROPERTY()
    int32 m_Money;

};
