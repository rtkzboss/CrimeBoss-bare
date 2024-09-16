#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_SimpleShooter.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UAkRtpc;
class UAkSwitchValue;
class UChildActorComponent;
class UIGS_WeaponInventoryObject;
class UNiagaraSystem;
class UParticleSystem;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SimpleShooter : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_SimpleShooter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAttack(const bool inForced);

    UFUNCTION(BlueprintCallable)
    void SetWeaponObject(UIGS_WeaponInventoryObject* inWeaponObject);

protected:
    UFUNCTION()
    void OnRep_ShootingChanged(bool inWasShooting);

public:
    UFUNCTION(BlueprintPure)
    void IsShooting(bool& outIsShooting);

    UFUNCTION(BlueprintCallable)
    void InitializeMuzzleReference(UChildActorComponent* inMuzzleComponent);

    UFUNCTION(BlueprintCallable)
    void InitAkComponent(UAkComponent* inAkComponent);

    UFUNCTION(BlueprintPure)
    float GetRPM() const;

    UFUNCTION(BlueprintPure)
    int32 GetProjectilesPerShot() const;

    UFUNCTION(BlueprintCallable)
    void BeginAttack(const bool inForced);

protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShotAILoudness;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ShootStartAudioEvent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ShootStopAudioEvent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* SingleShotAudioEvent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkSwitchValue* NormalStateAkSwitch;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkRtpc* FireRateAkRtpc;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkRtpc* RoundsLeftAkRtpc;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkRtpc* AdsAkRtpc;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* TracerEffect;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* TrailEffect;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* TracerEffectNiagara;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TracerEffectChance;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TrailEffectChance;

    UPROPERTY(EditAnywhere)
    float TracerEffectNiagaraChance;

    UPROPERTY(ReplicatedUsing=OnRep_ShootingChanged)
    bool mR_bIsShooting;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
