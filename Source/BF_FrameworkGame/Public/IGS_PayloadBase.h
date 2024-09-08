#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_OnPayloadActiveChangedDelegate.h"
#include "IGS_OnPayloadFinishedDelegate.h"
#include "IGS_PayloadBase.generated.h"

class UBoxComponent;
class UPrimitiveComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_PayloadBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnPayloadActiveChanged OnPayloadStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnPayloadActiveChanged OnPayloadEnabledChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnPayloadFinished OnPayloadFinishedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBoxComponent* BoxCollisionComponent;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsEnabled)
    bool mR_bIsEnabled;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsActive)
    bool mR_bIsActive;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsFinished)
    bool mR_bIsFinished;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> m_OverlappedActors;
    
public:
    AIGS_PayloadBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool inState);
    
protected:
    UFUNCTION()
    void OnRep_IsFinished();
    
    UFUNCTION()
    void OnRep_IsEnabled();
    
    UFUNCTION()
    void OnRep_IsActive();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPayloadStateChanged(bool inState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPayloadFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPayloadEnabledChanged(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintPure)
    bool IsPayloadFinished();
    
    UFUNCTION(BlueprintPure)
    bool IsPayloadEnabled();
    
    UFUNCTION(BlueprintPure)
    bool IsPayloadActive();
    
    UFUNCTION(BlueprintCallable)
    void FinishPayload();
    
};

