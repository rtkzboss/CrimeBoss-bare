#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "IGS_OnGameplayEffectStackChangedDelegate.h"
#include "IGS_AsyncTaskEffectStackChanged.generated.h"

class UAbilitySystemComponent;
class UIGS_AsyncTaskEffectStackChanged;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_AsyncTaskEffectStackChanged : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnGameplayEffectStackChanged OnGameplayEffectStackChange;
    
protected:
    UPROPERTY(Instanced)
    UAbilitySystemComponent* ASC;
    
public:
    UIGS_AsyncTaskEffectStackChanged();

private:
    UFUNCTION(BlueprintCallable)
    static UIGS_AsyncTaskEffectStackChanged* ListenForGameplayEffectStackChange(UAbilitySystemComponent* inAbilitySystemComponent, FGameplayTag inEffectGameplayTag);
    
    UFUNCTION(BlueprintCallable)
    void EndTask();
    
};

