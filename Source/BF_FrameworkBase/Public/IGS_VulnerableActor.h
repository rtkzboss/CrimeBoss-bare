#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_OnVulnerableBreakDelegate.h"
#include "IGS_OnVulnerableTakeDamageDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_VulnerableActor.generated.h"

class AIGS_GameCharacterFramework;
class UDamageType;

UCLASS(Config=Inherit)
class BF_FRAMEWORKBASE_API AIGS_VulnerableActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnVulnerableBreak OnVulnerableBreakEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnVulnerableTakeDamage OnVulnerableTakeDamageEvent;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadOnly)
    float RelativeHealth;
    
    UPROPERTY(BlueprintReadOnly)
    bool bBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UDamageType> VulnerableDamageType;
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_GameCharacterFramework* CurrentInstigator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxHealth;
    
    AIGS_VulnerableActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetVulnerableComponent();
    
    UFUNCTION(BlueprintPure)
    bool GetIsBroken();
    
    UFUNCTION(BlueprintCallable)
    void ApplyVulnerableDamage(float inAmount);
    
};

