#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "ScalableFloat.h"
#include "IGS_DownStateCountChangedSignatureDelegate.h"
#include "IGS_DownStateHandlerComponentBase.h"
#include "IGS_OnGoToDownstateAnimationDoneSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_DownStateHandlerComponent.generated.h"

class APawn;
class UAkAudioEvent;
class UGameplayEffect;
class UIGS_DamageTypeBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_DownStateHandlerComponent : public UIGS_DownStateHandlerComponentBase {
    GENERATED_BODY()
public:
    UIGS_DownStateHandlerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnRep_DownStateCount();
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_ReviveChange(APawn* inHealer, bool Inactive, bool inIsFinished);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_HealthStateChange(EIGS_HealthState inHealthState);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_DownStateCount(int32 inCount);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetCurrentDownStatesCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBaseDownStatesCount() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSetDownStatesCount(int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    void ForceDeath();
    
    UFUNCTION(BlueprintCallable)
    void ForceChangeState(EIGS_HealthState inState);
    
protected:
    UFUNCTION(Client, Reliable)
    void Client_ReviveChange(APawn* inHealer, bool Inactive, bool inIsFinished);
    
public:
    UFUNCTION(BlueprintCallable)
    void CallOnCanSelfrevive();
    
    UFUNCTION(BlueprintCallable)
    void CallGoToDownstateAnimationDone();
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FScalableFloat DownStateHealthMax;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FScalableFloat ReviveTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FScalableFloat ReviveTimePinned;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FScalableFloat DownStateLengthInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FScalableFloat PinnedDownStateLengthInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FScalableFloat DownStateDamageGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FScalableFloat GracePeriodAfterRevive;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FScalableFloat PinnedHealthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FScalableFloat HealthDecayTickPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FScalableFloat DownStateMovementSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UIGS_DamageTypeBase> BleedOutDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> DownedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> AfterRevivedSomeoneEffect;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> AfterBeingRevivedEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* DownstatePhase1StartAkEventFPP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* DownstatePhase2StartAkEventFPP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* DeathAKEventFPP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* ReviveStartedAkEventFPP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* ReviveFinishedAkEventFPP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* DownstatePhase1StartAkEventTPP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* DownstatePhase2StartAkEventTPP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* DeathAKEventTPP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* ReviveStartedAkEventTPP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* ReviveFinishedAkEventTPP;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_DownStateCountChangedSignature DownStateCountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnGoToDownstateAnimationDoneSignature OnGoToDownstateAnimationDone;
    
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float GracePeriodGoingDownEndTimestamp;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float GracePeriodAfterReviveEndTimestamp;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, ReplicatedUsing=OnRep_DownStateCount)
    int32 CurrentDownStatesCount;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    int32 BaseDownStatesCount;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

