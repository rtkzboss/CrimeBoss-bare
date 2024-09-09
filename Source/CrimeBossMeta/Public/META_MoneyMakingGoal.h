#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_BaseGoal.h"
#include "META_MoneyMakingGoalData.h"
#include "META_TaskManagment.h"
#include "META_MoneyMakingGoal.generated.h"

UCLASS(Abstract)
class CRIMEBOSSMETA_API UMETA_MoneyMakingGoal : public UMETA_BaseGoal, public IMETA_TaskManagment {
    GENERATED_BODY()
public:
    UMETA_MoneyMakingGoal();

    UFUNCTION(BlueprintCallable)
    void SetMonetaryValue(int32 inMonetaryValue);
    
    UFUNCTION(BlueprintPure)
    int32 GetMonetaryValue();
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetLootType();
    
private:
    UPROPERTY()
    FMETA_MoneyMakingGoalData m_Goal;
    

    // Fix for true pure virtual functions not being implemented
};

