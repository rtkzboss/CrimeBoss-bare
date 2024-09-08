#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "IGS_AbilityTask_PlayFPVMontageAndWait.generated.h"

class UAnimMontage;
class UGameplayAbility;
class UIGS_AbilityTask_PlayFPVMontageAndWait;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_AbilityTask_PlayFPVMontageAndWait : public UAbilityTask {
    GENERATED_BODY()
public:
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
    UAnimMontage* MontageToPlay;
    
    UPROPERTY()
    float Rate;
    
    UPROPERTY()
    FName StartSection;
    
    UPROPERTY()
    float StartTimeSeconds;
    
    UPROPERTY()
    bool bStopWhenAbilityEnds;
    
public:
    UIGS_AbilityTask_PlayFPVMontageAndWait();

    UFUNCTION()
    void OnMontageInterrupted();
    
    UFUNCTION()
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION()
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AbilityTask_PlayFPVMontageAndWait* CreatePlayMontageAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* NewMontageToPlay, float NewRate, FName NewStartSection, bool NewBStopWhenAbilityEnds, float NewStartTimeSeconds);
    
};

