#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "IGS_OnGameplayEffectStackChanged.h"
#include "IGS_AsyncTaskEffectStackChanged.generated.h"

class UAbilitySystemComponent;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_AsyncTaskEffectStackChanged : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_AsyncTaskEffectStackChanged();

private:
    UFUNCTION(BlueprintCallable)
    static UIGS_AsyncTaskEffectStackChanged* ListenForGameplayEffectStackChange(UAbilitySystemComponent* inAbilitySystemComponent, FGameplayTag inEffectGameplayTag);

    UFUNCTION(BlueprintCallable)
    void EndTask();

    UPROPERTY(BlueprintAssignable)
    FIGS_OnGameplayEffectStackChanged OnGameplayEffectStackChange;

protected:
    UPROPERTY(Instanced)
    UAbilitySystemComponent* ASC;

};
