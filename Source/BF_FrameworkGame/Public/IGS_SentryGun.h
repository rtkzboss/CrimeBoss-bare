#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "IGS_WeaponInventoryObject.h"
#include "Engine/EngineTypes.h"
#include "IGS_DetectorBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_SentryGun.generated.h"

class AIGS_GameCharacterFramework;
class UAkComponent;
class UIGS_OverheatComponent;
class UIGS_SimpleHitScanShooter;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_SentryGun : public AIGS_DetectorBase {
    GENERATED_BODY()
public:
    AIGS_SentryGun(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetSentryCanShoot(bool inEnabled);

public:
    UFUNCTION(BlueprintCallable)
    void SetCharacterOwner(AIGS_GameCharacterFramework* inCharacter);

protected:
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
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
