#pragma once
#include "CoreMinimal.h"
#include "IGS_ProgressionResult.h"
#include "IGS_UnlockItemInfo.h"
#include "IGS_MissionResult.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_ProcessMissionProgressionResultDelegate.h"
#include "ProgressionBaseComponent.generated.h"

class UIGS_PaybackSaveGameAccount;
class UIGS_ProgressionManager;
class UIGS_SaveManager;
class UIGS_UnlockManager;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UProgressionBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UProgressionBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockItem(const FIGS_UnlockItemInfo& inUnlockItemInfo);
    
    UFUNCTION(BlueprintCallable)
    bool TryUnlockItemByRequiredTagValue(FGameplayTag inUnlockTag, float InValue);
    
    UFUNCTION(BlueprintCallable)
    bool TryGetPendingUnlockedRewards(TArray<FIGS_UnlockItemInfo>& outUnlockedItems);
    
    UFUNCTION(BlueprintCallable)
    void SetPendingPoints(float inPoints);
    
    UFUNCTION(BlueprintCallable)
    void SaveSelectedUnlockedRewardsHistory(const FGameplayTag& selectedReward);
    
    UFUNCTION(BlueprintCallable)
    void SavePendingUnlockRewards(UPARAM(Ref) TArray<FIGS_UnlockItemInfo>& intUnlockedItems);
    
    UFUNCTION(BlueprintCallable)
    void SavePendingLevelUps(const int32 inLevelUps);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool SaveLastClaimedDailyMultiplayerDateTime(FDateTime InDateTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetAccumulatedProgressionResult();
    
    UFUNCTION(BlueprintCallable)
    bool ProcessNextPendingLevelUp(TArray<FIGS_UnlockItemInfo>& outUnlockedItems);
    
    UFUNCTION(BlueprintCallable)
    void ProcessMissionResults(UPARAM(Ref) FIGS_MissionResult& inMissionResult, bool inAccumulateResult);
    
    UFUNCTION(BlueprintPure)
    bool HasSomePendingUnlockRewards() const;
    
    UFUNCTION(BlueprintPure)
    bool HasSomePendingLevels() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FGameplayTag> GetPendingUnlockRewards() const;
    
    UFUNCTION(BlueprintPure)
    float GetPendingPoints() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPendingLevelsCount() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FDateTime GetLastClaimedDailyMultiplayerDateTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetDailyXPBonus(int32 inLevel) const;
    
    UFUNCTION(BlueprintPure)
    float GetDailyCashBonus(int32 inLevel) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearPendingUnlockedRewards();
    
protected:
    UFUNCTION(BlueprintPure)
    bool CanRewardBeClaimed(FDateTime InDateTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_ProcessLevelUp(const int32 inLevel, TArray<FIGS_UnlockItemInfo>& outUnlockedItems);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_ClaimDailyMultiplayerBonus();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddPendingPoints(float inPoints);
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ProcessMissionProgressionResult OnProcessMissionProgressionResult;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_ProgressionResult AccumulatedProgressionResult;
    
private:
    UPROPERTY()
    UIGS_PaybackSaveGameAccount* m_SaveGameAccount;
    
    UPROPERTY()
    UIGS_SaveManager* m_SaveManager;
    
    UPROPERTY()
    UIGS_ProgressionManager* m_ProgressionManager;
    
    UPROPERTY()
    UIGS_UnlockManager* m_UnlockManager;
    
};

