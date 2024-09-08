#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "IGS_OnDrillStartDelegate.h"
#include "IGS_OnDrillableTakeDamageDelegate.h"
#include "IGS_OnDrilledCompleteDelegate.h"
#include "IGS_DrillableComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_DrillableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnDrilledComplete OnDrilledCompleteEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnDrillStart OnDrillStartEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnDrillableTakeDamage OnDrillableTakeDamage;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float RelativeHealth;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool bDrilled;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    AIGS_GameCharacterFramework* CurrentInstigator;
    
    UPROPERTY(BlueprintReadOnly)
    FVector CurrentDrillPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    float MaxHealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FailThreshold;
    
    UIGS_DrillableComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetDrilledState(bool inDrilled);
    
    UFUNCTION(Reliable, Server)
    void Server_DrillStart(FVector inStartPoint);
    
    UFUNCTION(BlueprintCallable)
    void ResetDrillable();
    
    UFUNCTION()
    void OnRep_OnCurrentHealthChange();
    
    UFUNCTION(BlueprintPure)
    bool GetDrilledState();
    
    UFUNCTION(BlueprintPure)
    float GetDrillableRelativeHealth();
    
    UFUNCTION(BlueprintCallable)
    void DrillStart(FVector inStartPoint, AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDrillDamage(float inAmount);
    
};

