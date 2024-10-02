#pragma once
#include "CoreMinimal.h"
#include "EIGS_RewardType.h"
#include "IGS_UnlockReward.h"
#include "IGS_UnlockedCharacterSaveData.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "IGS_CharacterUnlocked.h"
#include "IGS_ContractUnlocked.h"
#include "IGS_PlotlineUnlocked.h"
#include "IGS_UnlockManagerBaseComponent.h"
#include "IGS_UnlockManagerComponent.generated.h"

class UIGS_PaybackSaveGameAccount;
class UIGS_SaveManager;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_UnlockManagerComponent : public UIGS_UnlockManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_UnlockManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockUniqueCharacter(EIGS_CharacterID inCharacter, bool bMaxLeveled);

    UFUNCTION(BlueprintCallable)
    void UnlockReward(FGameplayTag inRewardID);

    UFUNCTION(BlueprintCallable)
    void UnlockPlotline(const FGameplayTag inTagUnlock);

    UFUNCTION(BlueprintCallable)
    void UnlockContract(FGameplayTag inTagUnlock);

    UFUNCTION(BlueprintPure)
    bool TryGetRewardType(const FGameplayTag inRewardID, EIGS_RewardType& outType);

    UFUNCTION(BlueprintPure)
    bool IsUniqueCharacterUnlocked(EIGS_CharacterID inCharacter, bool bMaxLeveled) const;

    UFUNCTION(BlueprintCallable)
    void IsRewardAlreadyUnlocked(FGameplayTag inRewardID, bool& outUnlocked);

    UFUNCTION(BlueprintPure)
    bool HasPendingRewardsOfType(const EIGS_RewardType inType);

    UFUNCTION(BlueprintPure)
    bool HasPendingRewards() const;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetUnlockRewardIdForMission(FGameplayTag inMissionID, FGameplayTag& outRewardID, bool& outFound);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetUnlockRewardIdForCharacter(EIGS_CharacterID inCharacter, bool bMaxLeveled, FGameplayTag& outRewardID, bool& outFound);

    UFUNCTION(BlueprintPure)
    TArray<FIGS_UnlockedCharacterSaveData> GetUnlockedUniqueCharacters();

    UFUNCTION(BlueprintPure)
    TArray<FGameplayTag> GetUnlockedContractTags();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetRewardRow(FGameplayTag inRewardID, FIGS_UnlockReward& outRewardRow, bool& outFound);

    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetPendingRewards();

    UFUNCTION(BlueprintPure)
    int32 GetAccountVariableValue(FGameplayTag inTagUnlock);

    UFUNCTION(BlueprintCallable)
    void ConsumePendingReward(FGameplayTag inRewardID);

    UPROPERTY(BlueprintAssignable)
    FIGS_ContractUnlocked OnContractUnlocked;

    UPROPERTY(BlueprintAssignable)
    FIGS_CharacterUnlocked OnCharacterUnlocked;

    UPROPERTY(BlueprintAssignable)
    FIGS_PlotlineUnlocked OnPlotlineUnlocked;

protected:
    UPROPERTY()
    UIGS_PaybackSaveGameAccount* m_SaveGameAccount;

    UPROPERTY()
    UIGS_SaveManager* m_SaveManager;

    UPROPERTY()
    TArray<FGameplayTag> m_PendingUnlockRewards;

};
