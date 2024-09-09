#pragma once
#include "CoreMinimal.h"
#include "IGS_CommonItemData.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_HitEffectHandlerInterface.h"
#include "IGS_OnPickedUpDelegate.h"
#include "IGS_SuspicionActorBase.h"
#include "IGS_PickupActorBase.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UAkAudioEvent;
class UIGS_InteractiveComponent;
class UPrimitiveComponent;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_PickupActorBase : public AIGS_SuspicionActorBase, public IIGS_HitEffectHandlerInterface {
    GENERATED_BODY()
public:
    AIGS_PickupActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WakePhysics(bool inThrownPhysics);
    
    UFUNCTION(BlueprintCallable)
    void SleepPhysics();
    
    UFUNCTION(BlueprintCallable)
    void SetWasThrown(FVector inVelocity, bool bUseCameraPitch);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldMove(bool inShouldMove);
    
    UFUNCTION(BlueprintCallable)
    void ResetPickup();
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayThrowAkEvent(AIGS_GameCharacterFramework* inInstigator, UAkAudioEvent* inThrowEvent);
    
    UFUNCTION(BlueprintCallable)
    void PlayPickupAkEvent(AIGS_GameCharacterFramework* inInstigator, UAkAudioEvent* inPickupEvent);
    
    UFUNCTION()
    void OnRep_WasThrown();
    
    UFUNCTION()
    void OnRep_ShouldMove();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefresh();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPickupThrow(const FIGS_CommonItemData& inCommonItemData, AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPickupPickedUp(const FIGS_CommonItemData& inCommonItemData, AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPickupHit(const FIGS_CommonItemData& inCommonItemData, UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPickupFirstHit(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPickupBeginOverlap(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, const FHitResult& inHit);
    
    UFUNCTION()
    void OnComponentHit(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit);
    
    UFUNCTION()
    void OnComponentBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inbFromSweep, const FHitResult& inSweepResult);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_Pickup(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_AddImpulse(FVector inImpulse);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitPlayerOwner(AIGS_GameCharacterFramework* inOwner);
    
    UFUNCTION(BlueprintCallable)
    void InitMesh();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleBotPickupOverlap(AActor* inActor);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetWasThrown();
    
    UFUNCTION(BlueprintCallable)
    UIGS_InteractiveComponent* GetInteractiveComponent();
    
protected:
    UFUNCTION(BlueprintCallable)
    FIGS_CommonItemData GetCommonDataBP();
    
public:
    UFUNCTION(BlueprintCallable)
    void AI_Use(AIGS_GameCharacterFramework* inInstigator);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_ShouldMove)
    bool bShouldMove;
    
    UPROPERTY(EditDefaultsOnly)
    bool bRegistersToPickupsManager;
    
    UPROPERTY(EditDefaultsOnly)
    float SquaredVelocityForInAirNeeded;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsPickableByAI;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPrimitiveComponent* PickupMeshComp;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    TWeakObjectPtr<AIGS_GameCharacterFramework> OwningPawn;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AIGS_GameCharacterFramework> BeingPickedUpByBot;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AIGS_GameCharacterFramework> PickupSuggestedFor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DisableInteractionOnThrowTime;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnPickedUp OnPickedUpEvent;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_WasThrown)
    bool mR_bWasThrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* DefaultThrownAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* DefaultPickupAkEvent;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

