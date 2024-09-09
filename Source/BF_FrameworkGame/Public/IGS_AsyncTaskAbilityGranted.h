#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "IGS_OnAbilityGrantedDelegate.h"
#include "IGS_AsyncTaskAbilityGranted.generated.h"

class UAbilitySystemComponent;
class UGameplayAbility;
class UIGS_AsyncTaskAbilityGranted;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_AsyncTaskAbilityGranted : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_AsyncTaskAbilityGranted();

    UFUNCTION(BlueprintCallable)
    static UIGS_AsyncTaskAbilityGranted* ListenForAbilityWithTagGranted(UAbilitySystemComponent* inAbilitySystemComponent, FGameplayTag inAbilityTagFilter);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AsyncTaskAbilityGranted* ListenForAbilityOfClassGranted(UAbilitySystemComponent* inAbilitySystemComponent, TSoftClassPtr<UGameplayAbility> inAbilityClassFilter);
    
    UFUNCTION(BlueprintCallable)
    void EndTask();
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnAbilityGranted OnAbilityGranted;
    
protected:
    UPROPERTY(Instanced)
    UAbilitySystemComponent* ASC;
    
};

