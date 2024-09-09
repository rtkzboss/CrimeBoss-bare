#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_StartUsingMountedWeaponSignatureDelegate.h"
#include "IGS_StopUsingMountedWeaponSignatureDelegate.h"
#include "IGS_WeaponBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_MountedWeapon.generated.h"

class AIGS_GameCharacterFramework;
class UAkComponent;
class UBoxComponent;
class UCurveFloat;
class UIGS_AmmoInventoryObject;
class UIGS_AnimatedInteractiveComponentSimple;
class UIGS_ShooterBase;
class UIGS_SimpleReloader;
class UIGS_WeaponInventoryObject;
class UTimelineComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_MountedWeapon : public AIGS_WeaponBase {
    GENERATED_BODY()
public:
    AIGS_MountedWeapon(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UserChangedEvent(AIGS_GameCharacterFramework* inNewUser);
    
public:
    UFUNCTION(Reliable, Server)
    void StopUsing_SERVER(bool inIsOwnerAlive);
    
    UFUNCTION(BlueprintCallable)
    void SetDisallowLeave(bool inIsDisallowed);
    
protected:
    UFUNCTION()
    void RotateReloadProgress(float InProgress);
    
    UFUNCTION()
    void OnOwnerDeathNative(float CurrentHealth, float CurrentShield, float HealthChange, float ShieldChange, const FIGS_HitInfo& HitInfo);
    
    UFUNCTION()
    void OnCharacterHolsterFinishedEventNative(bool inIsHolstering);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLeaveAllowed() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetPawnPosition(AIGS_GameCharacterFramework* charToPosses);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseByAI;
    
    UPROPERTY(EditAnywhere)
    FInt32Interval AIShotsToFire;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval AIDelayBetweenShots;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval AIUseCooldown;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float NextAIUseTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    AIGS_GameCharacterFramework* VisitingChar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator AnimationRotationOffset;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_StartUsingMountedWeaponSignature OnStartUsingMountedWeaponABP;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_StopUsingMountedWeaponSignature OnStopUsingMountedWeaponABP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IsMGCanShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchLimit;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float PitchDotLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YawLimit;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float YawDotLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> SocketNames;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform LeftHandMgTransform;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform RightHandMgTransform;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleDefaultsOnly)
    UIGS_AnimatedInteractiveComponentSimple* InteractiveComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleDefaultsOnly)
    UBoxComponent* InteractiveBoxComponent;
    
    UPROPERTY(Instanced)
    UTimelineComponent* ReloadTimelineComponent;
    
    UPROPERTY()
    UCurveFloat* ReloadCurve;
    
    UPROPERTY()
    FRotator TargetMGRotation;
    
    UPROPERTY()
    FRotator StartMGRotation;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleDefaultsOnly)
    UIGS_ShooterBase* Shooter;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_SimpleReloader* Reloader;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DefaultMagazineCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UIGS_WeaponInventoryObject> WeaponItemClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UIGS_AmmoInventoryObject> AmmoItemClass;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleDefaultsOnly)
    float WeaponYaw;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleDefaultsOnly)
    float WeaponPitch;
    
    UPROPERTY()
    EIGS_WieldableSlot lastActiveSlot;
    
    UPROPERTY()
    UIGS_WeaponInventoryObject* WeaponItemObject;
    
    UPROPERTY()
    UIGS_AmmoInventoryObject* AmmoItemObject;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

