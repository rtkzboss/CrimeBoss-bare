#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableBase.h"
#include "EIGS_WeaponAttackType.h"
#include "IGS_ThrowableInventoryObject.h"
#include "IGS_WeaponPenetrationDefinition.h"
#include "UObject/NoExportTypes.h"
#include "IGS_BashInterface.h"
#include "IGS_ModMeshInterface.h"
#include "IGS_OnWeaponShootSignature.h"
#include "IGS_VirtualSightInfo.h"
#include "IGS_WeaponAccuracyChangedSignature.h"
#include "IGS_WeaponRecoilChangedSignature.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponBase.generated.h"

class APawn;
class UArrowComponent;
class UIGS_BasherComponent;
class UIGS_MuzzleFlashHandlerComponent;
class UIGS_ReloaderBase;
class UIGS_ShooterBase;
class UIGS_WeaponAccuracyComponent;
class UIGS_WeaponDynamicScopeHandler;
class UIGS_WeaponInventoryObject;
class UIGS_WeaponModsHandler;
class UIGS_WeaponRecoilComponent;
class UIGS_WeaponSkinHandler;
class UIGS_WeaponVisibilityHandler;
class UNiagaraComponent;
class UParticleSystemComponent;
class UPointLightComponent;
class USceneComponent;
class USpotLightComponent;
class UStaticMeshComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_WeaponBase : public AIGS_WieldableBase, public IIGS_BashInterface, public IIGS_ModMeshInterface {
    GENERATED_BODY()
public:
    AIGS_WeaponBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StopListeningToTrajectoryChanged();

public:
    UFUNCTION(BlueprintCallable)
    void StopAttack();

    UFUNCTION(BlueprintCallable)
    void StopAllAttacks();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetVisibilityMod(bool inVisible) const;

    UFUNCTION(BlueprintCallable)
    void SetNextShooter();

protected:
    UFUNCTION()
    void OnTrajectoryPredictionChanged(bool inShow, TSubclassOf<UIGS_ThrowableInventoryObject> inPredictedClass);

    UFUNCTION(BlueprintNativeEvent)
    void OnMagazineAmmoChanged(int32 inAmmoInMagazine, int32 inMagazineCapacity);

    UFUNCTION(BlueprintNativeEvent)
    void OnInventoryAmmoChanged(int32 inAmmoCount);

public:
    UFUNCTION(BlueprintCallable)
    bool IsPenetrating();

    UFUNCTION(BlueprintCallable)
    bool IsAttacking();

    UFUNCTION(BlueprintPure)
    UIGS_WeaponVisibilityHandler* GetWeaponVisibilityHandler() const;

    UFUNCTION(BlueprintPure)
    UIGS_WeaponInventoryObject* GetWeaponInventoryObject() const;

    UFUNCTION(BlueprintPure)
    UIGS_ReloaderBase* GetReloader() const;

    UFUNCTION(BlueprintCallable)
    EIGS_WeaponAttackType GetCurrentShooterType();

    UFUNCTION(BlueprintPure)
    UIGS_ShooterBase* GetCurrentShooterObject() const;

    UFUNCTION(BlueprintPure)
    void GetCurrentShooterModifications(float& outBaseDamageMultiplier, float& outEffectiveRangeMultiplier, float& outMaxRangeMultiplier, float& outRPMMultiplier) const;

    UFUNCTION(BlueprintPure)
    float GetCurrentReloadTimeMultiplier() const;

    UFUNCTION(BlueprintPure)
    void GetCurrentRecoilModifications(float& outVerticalRecoilMultiplier, float& outHorizontalRecoilMultiplier) const;

    UFUNCTION(BlueprintPure)
    int32 GetCurrentMagazineCapacity() const;

    UFUNCTION(BlueprintPure)
    void GetCurrentIdleSwayIntensity(float& outIdleSwayIntensity) const;

    UFUNCTION(BlueprintPure)
    void GetCurrentAttributeMultipliers(float& outWeaponDamageAttrib, float& outHipFireSpreadAttrib, float& outAdsSpreadAttrib, float& outIdleSwayIntensityAttrib, float& outAdsSpeedAttrib, float& outReloadSpeedAttrib) const;

    UFUNCTION(BlueprintPure)
    void GetCurrentAIStimuliMultipliers(float& outMuzzleFlashStimuliMultiplier, float& outShotSoundStimuliMultiplier) const;

    UFUNCTION(BlueprintPure)
    void GetCurrentAimOffset(FVector& OutLocation, FVector& OutRotation) const;

    UFUNCTION(BlueprintPure)
    void GetCurrentADSAndHolsterModifications(float& outHolsterTime, float& outADSInSpeedMult, float& outADSOutSpeedMult, float& outScopeInPercent, bool& outIsUsingScopeMod) const;

    UFUNCTION(BlueprintPure)
    void GetCurrentAccuracyModifications(float& outHipFireSpreadMultiplier, float& outADSSpreadMultiplier, float& outSpreadIncreasePerShotMultiplier, float& outMovementSpreadMultiplier) const;

    UFUNCTION(BlueprintCallable)
    bool DetermineTortillaUsage(APawn* inPawn);

    UFUNCTION(BlueprintPure)
    bool CanAttack() const;

    UFUNCTION(BlueprintCallable)
    void BeginAttack();

    UFUNCTION(BlueprintCallable)
    void Bash();

    UPROPERTY(BlueprintAssignable)
    FIGS_OnWeaponShootSignature OnWeaponShotBP;

    UPROPERTY(BlueprintAssignable)
    FIGS_WeaponAccuracyChangedSignature OnWeaponAccuracyChanged;

    UPROPERTY(BlueprintAssignable)
    FIGS_WeaponRecoilChangedSignature OnWeaponRecoilChanged;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* SightModMesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* DynamicScopeMesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* VisibilityModMesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* BarrelModMesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* GripModMesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* MagazineModMesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* SecondMagazineModMesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* StockModMesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    TArray<UStaticMeshComponent*> WeaponModsArray;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UArrowComponent* LaserArrow;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USpotLightComponent* FlashSpotLight;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPointLightComponent* FlashPointLight;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_MuzzleFlashHandlerComponent* MuzzleFlashHandlerComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* MuzzleFlashRootComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UNiagaraComponent* MuzzleFlashParticleComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UParticleSystemComponent* MuzzleFlashParticleComponentCascade;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UNiagaraComponent* BarrelSmokeParticleComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPointLightComponent* MuzzleFlashLight3PV;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPointLightComponent* MuzzleFlashLightFPV;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPointLightComponent* MuzzleFlashLightFPVSecondary;

    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
    bool bDisableAim;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bAlwaysShootsForward;

    UPROPERTY(EditAnywhere)
    bool ShouldUseSniperScope;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_WeaponPenetrationDefinition PenetrationDefinition;

protected:
    UPROPERTY(EditAnywhere)
    bool CanReloadInADS;

    UPROPERTY(EditAnywhere)
    float ReloadAfterLastBulletDelay;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_WeaponAccuracyComponent* WeaponAccuracy;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_WeaponRecoilComponent* WeaponRecoil;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_WeaponModsHandler* WeaponModsHandler;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_WeaponSkinHandler* WeaponSkinHandler;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_WeaponVisibilityHandler* WeaponVisibilityHandler;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_WeaponDynamicScopeHandler* WeaponDynamicScopeHandler;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    TArray<UIGS_ShooterBase*> Shooters;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_ReloaderBase* ReloaderBase;

    UPROPERTY(EditAnywhere)
    EIGS_WeaponAttackType PrimaryShooter;

    UPROPERTY(Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_ShooterBase> CurrentShooter;

    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_BasherComponent* Basher;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName VirtualSightSocketName;

    UPROPERTY()
    FIGS_VirtualSightInfo VirtualSightInfo;


    // Fix for true pure virtual functions not being implemented
};
