#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "Engine/EngineTypes.h"
#include "IGS_DetectorBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_SentryGun.generated.h"

class UAkComponent;
class UIGS_OverheatComponent;
class UIGS_SimpleHitScanShooter;
class UIGS_WeaponInventoryObject;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_SentryGun : public AIGS_DetectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool bIsInvulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DownTime;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_WeaponInventoryObject> WeaponObjectClass;
    
    UPROPERTY(EditDefaultsOnly)
    FComponentReference MuzzleFlashReference;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UIGS_OverheatComponent> OptionalOverheatComponent;
    
    UPROPERTY(Instanced, Transient)
    UIGS_SimpleHitScanShooter* Shooter;
    
    UPROPERTY(Instanced, Transient)
    UAkComponent* AkComponent;
    
    UPROPERTY(Transient)
    UIGS_WeaponInventoryObject* weaponObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShootAngleDegrees;
    
public:
    AIGS_SentryGun(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetSentryCanShoot(bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_CosmeticShootStopped();
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_CosmeticShootStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CosmeticShootStopped();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CosmeticShootStarted();
    
};

