#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "IGS_AbilityTask_HolsterGun.generated.h"

class UGameplayAbility;
class UIGS_AbilityTask_HolsterGun;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_AbilityTask_HolsterGun : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMontageWaitSimpleDelegate OnCompleted;
    
private:
    UPROPERTY()
    uint8 bIsHolster: 1;
    
    UPROPERTY()
    float PlayRate;
    
public:
    UIGS_AbilityTask_HolsterGun();

    UFUNCTION(BlueprintCallable)
    static UIGS_AbilityTask_HolsterGun* CreateHolsterGunProxy(UGameplayAbility* inOwningAbility, FName inTaskInstanceName, bool inIsHolster, float InRate);
    
};

