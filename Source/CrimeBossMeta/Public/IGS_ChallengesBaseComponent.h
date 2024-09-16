#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_ChallengeDataChanged.h"
#include "IGS_ChallengesCompleted.h"
#include "IGS_ChallengesBaseComponent.generated.h"

class UIGS_ChallengesDatabase;
class UIGS_PaybackSaveGameAccount;
class UIGS_SaveManager;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_ChallengesBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_ChallengesBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryResolveCompletedChallenges(bool inNotify);

    UFUNCTION(BlueprintCallable)
    void SetChallengeInProgressValue(FGameplayTag inTag, int32 InValue, bool inNotify);

    UFUNCTION(BlueprintCallable)
    void ResetChallenges();

    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetRequiredCompletedChallenges(FGameplayTag inTag) const;

    UFUNCTION(BlueprintPure)
    TMap<FGameplayTag, int32> GetCompletedChallenges() const;

    UFUNCTION(BlueprintPure)
    int32 GetCompletedChallengeCount(FGameplayTag inTag, bool inExactMatch) const;

    UFUNCTION(BlueprintPure)
    TMap<FGameplayTag, int32> GetChallengesInProgress() const;

    UFUNCTION(BlueprintPure)
    int32 GetChallengeInProgressValue(FGameplayTag inTag, bool inExactMatch) const;

    UFUNCTION(BlueprintPure)
    bool CanChallengeBeProgressed(FGameplayTag inTag) const;

    UPROPERTY(BlueprintAssignable)
    FIGS_ChallengeDataChanged OnChallengeDataChanged;

    UPROPERTY(BlueprintAssignable)
    FIGS_ChallengesCompleted OnChallengesCompleted;

protected:
    UPROPERTY()
    UIGS_PaybackSaveGameAccount* m_SaveGameAccount;

    UPROPERTY()
    UIGS_SaveManager* m_SaveManager;

    UPROPERTY()
    TMap<FGameplayTag, int32> m_ChallengesInProgress;

    UPROPERTY()
    TMap<FGameplayTag, int32> m_CompletedChallenges;

    UPROPERTY()
    UIGS_ChallengesDatabase* m_ChallengesDatabase;

};
