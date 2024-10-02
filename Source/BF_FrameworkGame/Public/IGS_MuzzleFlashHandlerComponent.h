#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_MuzzleFlashHandlerComponent.generated.h"

class UNiagaraSystem;
class UParticleSystem;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_MuzzleFlashHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_MuzzleFlashHandlerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void MuzzleFlashDoEffect();

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> MuzzleFlashParticleFPV;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> MuzzleFlashParticle3PV;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> MuzzleFlashParticleExtraFireModeFPV;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> MuzzleFlashParticleExtraFireMode3PV;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UParticleSystem> MuzzleFlashParticleCascadeFPV;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UParticleSystem> MuzzleFlashParticleCascade3PV;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> BarrelSmokeParticleFPV;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> BarrelSmokeParticle3PV;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BarrelSmokeStartAfterShots;

    UPROPERTY(EditAnywhere)
    float MuzzleFlashStopTime;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxTimeBetweenShotsForBarrelSmoke;

    UPROPERTY(EditAnywhere)
    float LightStopTime;

    UPROPERTY(EditAnywhere)
    float LightFadeInSpeed;

    UPROPERTY(EditAnywhere)
    float LightFadeOutSpeed;

    UPROPERTY(EditAnywhere)
    bool bResetBarrelSmokeOnReactivate;

protected:
    UPROPERTY()
    UNiagaraSystem* MuzzleFlashParticle;

    UPROPERTY()
    UNiagaraSystem* MuzzleFlashParticleExtraFireMode;

};
