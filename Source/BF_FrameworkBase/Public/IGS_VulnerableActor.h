#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/DamageType.h"
#include "IGS_OnVulnerableBreak.h"
#include "IGS_OnVulnerableTakeDamage.h"
#include "Templates/SubclassOf.h"
#include "IGS_VulnerableActor.generated.h"

class AIGS_GameCharacterFramework;

UCLASS()
class BF_FRAMEWORKBASE_API AIGS_VulnerableActor : public AActor {
    GENERATED_BODY()
public:
    AIGS_VulnerableActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetVulnerableComponent();

    UFUNCTION(BlueprintPure)
    bool GetIsBroken();

    UFUNCTION(BlueprintCallable)
    void ApplyVulnerableDamage(float inAmount);

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

};
