#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BF_OnUnlockMethodChosenDelegate.h"
#include "IGS_InteractiveComponent.h"
#include "IGS_UnlockMethodComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_UnlockMethodComponent : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBF_OnUnlockMethodChosen OnServerUnlockMethodChosenEvent;
    
    UPROPERTY(BlueprintAssignable)
    FBF_OnUnlockMethodChosen OnClientUnlockMethodChosenEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowUnusableMethods;
    
    UPROPERTY()
    AIGS_GameCharacterFramework* CurrentInstigator;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTagContainer UnlockMethods;
    
    UIGS_UnlockMethodComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InitUnlockMethodComponent(FGameplayTagContainer inMethods);
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetUnlockMethods();
    
    UFUNCTION(BlueprintPure)
    int32 GetUnlockMethodCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetCanBeUsed(FGameplayTag inMethod);
    
};

