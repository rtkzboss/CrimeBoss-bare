#pragma once
#include "CoreMinimal.h"
#include "IGS_ObjectStatus.h"
#include "ScalableFloat.h"
#include "IGS_PlayerStatus.generated.h"

class UAkAudioEvent;

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerStatus : public UIGS_ObjectStatus {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FScalableFloat HealthRegenDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FScalableFloat HealthRegenHPS;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FScalableFloat HealthRegenTickRateInSeconds;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bHealthRegenAllowed;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float HealthRegenDelayAttribute;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float HealthRegenMultiplierAttribute;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bAutoregenMaxOverriden;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float AutoregenMaxOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* RegenerationStartAkEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* RegenerationFinishedAkEvent;
    
public:
    UIGS_PlayerStatus(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRegenerationBlocked(bool inIsBlocked);
    
protected:
    UFUNCTION(Client, Unreliable)
    void MessageToClient_RegenStarted();
    
    UFUNCTION(Client, Unreliable)
    void MessageToClient_RegenFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void KickInRegeneration();
    
    UFUNCTION(BlueprintCallable)
    bool IsRegenerationBlocked();
    
    UFUNCTION(BlueprintPure)
    float GetCurrentMaxAutoregenHealth() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSetMaxHealth(float inMaxHealth);
    
    UFUNCTION(BlueprintCallable)
    void ForceSetMaxAutoregenHealth(float inAutoregenMaxHealth, bool inOverride);
    
    UFUNCTION(BlueprintCallable)
    void ForceSetHealth(float inHealth);
    
};

