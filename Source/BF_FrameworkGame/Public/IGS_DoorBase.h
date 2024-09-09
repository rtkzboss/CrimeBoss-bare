#pragma once
#include "CoreMinimal.h"
#include "AkGameplayTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_DoorTier.h"
#include "IGS_DoorBreachInterface.h"
#include "IGS_DoorOpenedEventDelegate.h"
#include "IGS_EntranceBase.h"
#include "IGS_DoorBase.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_NavLinkComponentFramework;
class UShapeComponent;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_DoorBase : public AIGS_EntranceBase, public IIGS_DoorBreachInterface {
    GENERATED_BODY()
public:
    AIGS_DoorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateDoorOrientation(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UnlockEvent();
    
    UFUNCTION(BlueprintCallable)
    void Unlock();
    
protected:
    UFUNCTION()
    void SwitchPortalComponent(bool inOpened);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHardLocked(bool inHardLocked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RelockEvent();
    
    UFUNCTION(BlueprintCallable)
    void Relock();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PostInitializeComponentsBP();
    
protected:
    UFUNCTION()
    void OpenPortalComponent(bool inState);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OpenDoor_Internal(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OpenDoor(AIGS_GameCharacterFramework* inInstigator);
    
protected:
    UFUNCTION()
    void OnRep_HardLock();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreBreach();
    
    UFUNCTION(BlueprintImplementableEvent)
    void LockEvent();
    
    UFUNCTION(BlueprintCallable)
    void Lock();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HardLockedEvent(bool inHardLocked);
    
    UFUNCTION(BlueprintCallable)
    void ForceChangeDoorOpenState(FVector inInstigatorLocation, bool inOpen);
    
    UFUNCTION(BlueprintCallable)
    static void EnableNavigationBlockingOnCollision(UShapeComponent* InComponent, bool inEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConvertToStaticDoor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CloseDoor_Internal();
    
    UFUNCTION(BlueprintCallable)
    void CloseDoor();
    
    UFUNCTION(BlueprintCallable)
    void CallDoorOpened(AIGS_GameCharacterFramework* inInstigator);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AkAcousticPortalState AcousticPortalInitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHasAcousticPortal;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    bool bDoorDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStartOpen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFlipStartingRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStartLocked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOpenableFromBack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUnlockFromBack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStartHardLocked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStartAsStatic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDontBreachOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InteractionEndRotation;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_NavLinkComponentFramework* DoorLink;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EIGS_DoorTier DoorTier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRammable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bTakesExplosiveDamage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bTakesPointDamage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bShootableLock;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPenetrable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanEnemiesOpenWhenLocked;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer UnlockMethods;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_DoorOpenedEvent OnDoorOpenedEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_HardLock)
    bool m_bHardLock;
    
private:
    UPROPERTY()
    bool m_bPreBreach;
    
    UPROPERTY()
    FVector InteractionStartRotation;
    
    UPROPERTY()
    FVector InteractionFinalRotation;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

