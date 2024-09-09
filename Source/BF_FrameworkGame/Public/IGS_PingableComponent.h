#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_CameraOutlineState.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_PingableType.h"
#include "IGS_OnPingStateChangedEventDelegate.h"
#include "IGS_PingableComponent.generated.h"

class UAkAudioEvent;
class UIGS_OutlineComponent;
class UObject;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PingableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_PingableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOutlineState(EIGS_CameraOutlineState inType, bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void PingIndefinitely(const UObject* inPingedBy);
    
    UFUNCTION(BlueprintCallable)
    void PingCustomDuration(float inDuration, const UObject* inPingedBy);
    
    UFUNCTION(BlueprintCallable)
    void Ping(const UObject* inPingedBy);
    
private:
    UFUNCTION()
    void OnRep_IsPingedChange();
    
protected:
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_PingSound();
    
public:
    UFUNCTION()
    EIGS_TeamSideEnum GetOwnerTeamSide() const;
    
    UFUNCTION(BlueprintCallable)
    void EndPing();
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseRootForOutline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowOutline;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float PingDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EIGS_PingableType PingableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool mR_bCanBePinged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnPingStateChangedEvent OnPingStateChangedBP;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAkAudioEvent> PingedAkAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAkAudioEvent> PingedDangerousAkAudioEvent;
    
private:
    UPROPERTY(Instanced)
    TArray<UPrimitiveComponent*> m_PrimitiveComponentsToOutline;
    
    UPROPERTY()
    UAkAudioEvent* PingedAkAudioEventLoaded;
    
    UPROPERTY()
    UAkAudioEvent* PingedDangerousAkAudioEventLoaded;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsPingedChange)
    bool mR_bIsPinged;
    
    UPROPERTY(Instanced)
    UIGS_OutlineComponent* m_OutlineComponent;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

