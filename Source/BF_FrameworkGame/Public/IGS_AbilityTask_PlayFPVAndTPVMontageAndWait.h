#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "IGS_AbilityTask_PlayFPVAndTPVMontageAndWait.generated.h"

class UAnimMontage;
class UGameplayAbility;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_AbilityTask_PlayFPVAndTPVMontageAndWait : public UAbilityTask {
    GENERATED_BODY()
public:
    UIGS_AbilityTask_PlayFPVAndTPVMontageAndWait();

    UFUNCTION()
    void OnMontageInterrupted();

    UFUNCTION()
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);

    UFUNCTION()
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);

    UFUNCTION(BlueprintCallable)
    static UIGS_AbilityTask_PlayFPVAndTPVMontageAndWait* CreatePlayFPVAndTPVMontageAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* FPVMontageToPlay, UAnimMontage* TPVMontageToPlay, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float StartTimeSeconds);

    UPROPERTY(BlueprintAssignable)
    FMontageWaitSimpleDelegate OnCompleted;

    UPROPERTY(BlueprintAssignable)
    FMontageWaitSimpleDelegate OnBlendOut;

    UPROPERTY(BlueprintAssignable)
    FMontageWaitSimpleDelegate OnInterrupted;

    UPROPERTY(BlueprintAssignable)
    FMontageWaitSimpleDelegate OnCancelled;

private:
    UPROPERTY()
    UAnimMontage* FPVMontageToPlay;

    UPROPERTY()
    UAnimMontage* TPVMontageToPlay;

    UPROPERTY()
    float Rate;

    UPROPERTY()
    FName StartSection;

    UPROPERTY()
    float StartTimeSeconds;

    UPROPERTY()
    bool bStopWhenAbilityEnds;

};
