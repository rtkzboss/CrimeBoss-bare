#pragma once
#include "CoreMinimal.h"
#include "EIGS_AnimationEventType.h"
#include "EIGS_AnimationTaskFinishedReason.h"
#include "IGS_HasWeakSpotInterface.h"
#include "IGS_HitInfo.h"
#include "GameplayTagContainer.h"
#include "PaybackAICharacter.h"
#include "PaybackRobotCharacter.generated.h"

class AController;
class UActorComponent;
class UBoxComponent;
class UIGS_WeakSpotComponent;
class UPrimitiveComponent;

UCLASS()
class PAYBACK_API APaybackRobotCharacter : public APaybackAICharacter, public IIGS_HasWeakSpotInterface {
    GENERATED_BODY()
public:
    APaybackRobotCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartOverloadSequenceDelayed(AController* inInstigator, const float inDelay);
    
    UFUNCTION(BlueprintCallable)
    void StartOverloadSequence(AController* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeakSpotCompromised();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStunnedEvent(bool inStart);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOverloadStared();
    
private:
    UFUNCTION()
    void OnOverloadForcedTimeEnd(AController* inInstigator);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnOverloadEnded(const AController* inInstigator);
    
private:
    UFUNCTION()
    void OnOverloadAnimationEvent(EIGS_AnimationEventType inEventType, AController* inInstigator);
    
    UFUNCTION()
    void OnOverloadAnimationEnd(EIGS_AnimationTaskFinishedReason inReason, AController* inInstigator);
    
    UFUNCTION()
    void OnHealthChangedWithCompromisedWeakSpot(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeadShotOff();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFlashedEvent(bool inStart);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEnableVfx(const bool inEnable);
    
private:
    UFUNCTION()
    void OnEffectApplied(const FGameplayTag inGameplayTag, int32 inCount);
    
    UFUNCTION()
    void OnAnyWeakSpotCompromisedEvent(const UPrimitiveComponent* inWeakSpotReference, const FIGS_HitInfo& inLastHitInfo);
    
    UFUNCTION()
    void OnAnyShootablePartShotOff(const UActorComponent* InComponent, float inDamageAmount, const FIGS_HitInfo& inHit);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_Overload(AController* inInstigator);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableVfx(const bool inEnable);
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UBoxComponent* WeakSpotCollision;
    
    UPROPERTY(EditDefaultsOnly)
    float WeakSpotHealth;
    
    UPROPERTY(EditDefaultsOnly)
    float WeakSpotAIDamageMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxHealthPercentageTaken;
    
    UPROPERTY(EditDefaultsOnly)
    float ForcedOverloadTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OverloadOuterDamageRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OverloadInnerDamageRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OverloadEffectRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OverloadBaseDamage;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag OverloadAnimationTag;
    
private:
    UPROPERTY(Instanced)
    UIGS_WeakSpotComponent* m_WeakSpotComponent;
    

    // Fix for true pure virtual functions not being implemented
};

