#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_OnDefendFinished.h"
#include "IGS_OnDefendStateChanged.h"
#include "IGS_InteractableDefendPointBase.generated.h"

class UBoxComponent;
class UIGS_InteractiveComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_InteractableDefendPointBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_InteractableDefendPointBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPinged(bool inPinged);

    UFUNCTION()
    void OnRep_Pinged();

    UFUNCTION(BlueprintNativeEvent)
    void OnPlayerCountChanged(int32 inCount);

    UFUNCTION(BlueprintImplementableEvent)
    void OnPinged(bool inPinged);

    UFUNCTION(BlueprintImplementableEvent)
    void OnPauseChanged(bool inPaused);

private:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);

public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDefendStateChanged(bool inState);

    UFUNCTION(BlueprintImplementableEvent)
    void OnDefendFinished();

private:
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inbFromSweep, const FHitResult& inSweepResult);

public:
    UFUNCTION(BlueprintPure)
    float GetDefendTimeRemaining();

    UFUNCTION(BlueprintPure)
    float GetDefendTimeElapsed();

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_InteractiveComponent* DefendInteraction;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USceneComponent* RootComp;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* LeaveTrigger;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefendTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsTimed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ResetCountdown;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayAfterAllPlayersOut;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_Pinged)
    bool mR_bPinged;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnDefendFinished OnDefendFinishedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnDefendFinished OnDefendStartedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnDefendStateChanged OnDefendStateChangedEvent;

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
