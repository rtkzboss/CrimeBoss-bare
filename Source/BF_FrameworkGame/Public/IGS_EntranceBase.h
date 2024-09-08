#pragma once
#include "CoreMinimal.h"
#include "IGS_HasObjectStatusInterface.h"
#include "IGS_HitInfo.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EntranceLockStateChangedSignatureDelegate.h"
#include "EntranceStateChangedSignatureDelegate.h"
#include "IGS_OnBrokenEventDelegate.h"
#include "IGS_EntranceBase.generated.h"

class UBoxComponent;
class UChildActorComponent;
class UIGS_ObjectStatus;
class UIGS_VisbilityComponent;
class USceneComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_EntranceBase : public AActor, public IIGS_HasObjectStatusInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USceneComponent* EntranceRootComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_ObjectStatus* DoorObjectStatus;
    
    UPROPERTY(Instanced)
    UIGS_VisbilityComponent* VisibilityComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UChildActorComponent* FrontBreachingPoints;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UChildActorComponent* BackBreachingPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPortalDoor;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_bLocked)
    bool bLocked;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_bOpen)
    bool bOpen;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool bFullyProgressed;
    
    UPROPERTY(BlueprintReadOnly)
    FIGS_HitInfo KillHitInfo;
    
    UPROPERTY(BlueprintAssignable)
    FEntranceStateChangedSignature OnEntranceStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FEntranceLockStateChangedSignature OnEntranceLockStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnBrokenEvent OnBrokenEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBoxComponent* NavigationBlock;
    
    AIGS_EntranceBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetOpenState(bool inOpen);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLocked(bool inLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetFullyProgressed(bool inFullyProgressed);
    
    UFUNCTION()
    void OnRep_bOpen();
    
    UFUNCTION()
    void OnRep_bLocked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOpenStateChanged(bool inOpen);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLockStateChanged(bool inLocked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEntranceStateFullyChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBroken();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnOpenStateChanged(bool inOpen);
    
    UFUNCTION(BlueprintPure)
    bool GetOpenState();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool GetIsLocked() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsBroken() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetFullyProgressed();
    
    UFUNCTION(BlueprintPure)
    bool GetDoorOrientationFromLocation(FVector InLocation);
    
    UFUNCTION(BlueprintPure)
    bool GetDoorOrientationFromDirection(FVector InDirection);
    

    // Fix for true pure virtual functions not being implemented
};

