#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "IGS_MuzzleFlash.generated.h"

class UNiagaraComponent;
class UParticleSystemComponent;
class UPointLightComponent;
class USceneComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_MuzzleFlash : public AActor {
    GENERATED_BODY()
public:
    AIGS_MuzzleFlash(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopMuzzleFlash();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMuzzleFlash();

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* MuzzleFlashRootComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UNiagaraComponent* ParticleNiagaraComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UParticleSystemComponent* ParticleComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UNiagaraComponent* ParticleNiagaraTortillaComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UParticleSystemComponent* ParticleTortillaComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPointLightComponent* LightComponent3PV;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPointLightComponent* LightComponentFPV;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector MuzzleNiagaraOffset;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 StartAfterProjectileCount;

    UPROPERTY(EditAnywhere)
    float MuzzleLightStopTime;

    UPROPERTY(EditAnywhere)
    float MuzzleStopTime;

    UPROPERTY(EditAnywhere)
    float FadeInSpeed;

    UPROPERTY(EditAnywhere)
    float FadeOutSpeed;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsTortilla;

protected:
    UPROPERTY(Instanced)
    UPointLightComponent* CurrentLight;

};
