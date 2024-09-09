#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "IGS_InteractiveComponent.h"
#include "IGS_OnAnimatedInteractionLerpFinishedDelegate.h"
#include "IGS_AnimatedInteractiveComponentBase.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_PlayerCharacterMovementComponent;
class USceneComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AnimatedInteractiveComponentBase : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UIGS_AnimatedInteractiveComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAnimation(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void StartAnimation(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintNativeEvent)
    void Server_OnPreInteractionLerpFinished(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseInput(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION()
    void OnRep_Progress(float inOldProgress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionEnded();
    
    UFUNCTION(BlueprintNativeEvent)
    void MovePlayerToPointInternal();
    
    UFUNCTION(BlueprintNativeEvent)
    void Client_OnPreInteractionLerpFinished(AIGS_GameCharacterFramework* inInstigator);
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Progress)
    float R_Progress;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    USceneComponent* StartPointComponent;
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_GameCharacterFramework* CurrentPlayerCharInstigator;
    
    UPROPERTY(Instanced)
    UIGS_PlayerCharacterMovementComponent* PlayerMovement;
    
    UPROPERTY(BlueprintReadOnly)
    FVector CurrentTargetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag AnimationGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAnimationOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStartAnimationImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockInputUntilAbilityEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMoveToExactPositionAndRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceFromPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TolerableThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FailsafeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisablePhysicsDuringLerping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bKeepDisabledPhysicsUntilAbilityEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSetFlyingWhenLerping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRotateOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRotatePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMoveWithInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bActAsNormalInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer InputTagsToApply;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShouldMovePayload;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnAnimatedInteractionLerpFinished OnAnimatedInteractionLerpFinishedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnAnimatedInteractionLerpFinished OnServerAnimatedInteractionLerpFinishedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnAnimatedInteractionLerpFinished OnAnimatedInteractionLerpCanceledEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnAnimatedInteractionLerpFinished OnServerAnimatedInteractionLerpCanceledEvent;
    
protected:
    UPROPERTY()
    FTimerHandle m_FailsafeTimerHandle;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

