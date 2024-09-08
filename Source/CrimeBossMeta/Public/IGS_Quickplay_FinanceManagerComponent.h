#pragma once
#include "CoreMinimal.h"
#include "IGS_UnlockItemInfo.h"
#include "IGS_MissionResult.h"
#include "GameplayTagContainer.h"
#include "IGS_FinanceManagerBaseComponent.h"
#include "IGS_Quickplay_FinanceManagerComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_FinanceManagerComponent : public UIGS_FinanceManagerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 Balance;
    
public:
    UIGS_Quickplay_FinanceManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBalance(int32 InValue);
    
    UFUNCTION(BlueprintPure)
    int32 CalculateUnlockItemCostFromInfo(const FIGS_UnlockItemInfo& inUnlockItemInfo, const float inRelativePrice) const;
    
    UFUNCTION(BlueprintPure)
    int32 CalculateUnlockItemCost(const FGameplayTag inTagID, const float inRelativePrice) const;
    
    UFUNCTION(BlueprintPure)
    void CalculateMissionRewardWithMultipliers(const FIGS_MissionResult& inMissionResult, int32& outMissionReward, float& outMultiplier) const;
    
    UFUNCTION(BlueprintCallable)
    void AddBalance(int32 InValue);
    
};

