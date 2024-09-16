#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "IGS_OverrideTortillaDelegate.h"
#include "IGS_AbilityTask_OverrideTortilla.generated.h"

class UGameplayAbility;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_AbilityTask_OverrideTortilla : public UAbilityTask {
    GENERATED_BODY()
public:
    UIGS_AbilityTask_OverrideTortilla();

    UFUNCTION(BlueprintCallable)
    static UIGS_AbilityTask_OverrideTortilla* CreateOverrideTortillaProxy(UGameplayAbility* inOwningAbility, FName inTaskInstanceName, bool inTortillaEnabled, bool inOverrideFOV, float inOverridenFOVValue, float inInterpSpeed);

    UPROPERTY(BlueprintAssignable)
    FIGS_OverrideTortillaDelegate OnCompleted;

private:
    UPROPERTY()
    bool TortillaEnabled;

    UPROPERTY()
    bool OverrideFOV;

    UPROPERTY()
    float OverridenFOVValue;

    UPROPERTY()
    float InterpSpeed;

};
