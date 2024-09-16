#pragma once
#include "CoreMinimal.h"
#include "IGS_LauncherProjectileBase.h"
#include "IGS_GrenadeLauncherProjectileBase.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UAkAudioEvent;
class UAkComponent;
class UAkSwitchValue;
class UNiagaraSystem;
class UParticleSystem;
class UPointLightComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_GrenadeLauncherProjectileBase : public AIGS_LauncherProjectileBase {
    GENERATED_BODY()
public:
    AIGS_GrenadeLauncherProjectileBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintNativeEvent)
    void PlayEffect();

    UFUNCTION(BlueprintNativeEvent)
    void OnExplosionSphereTrace(AActor* inActor) const;

    UFUNCTION(BlueprintNativeEvent)
    void OnExplosion();

    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_ExplodeEffect();

public:
    UFUNCTION(BlueprintPure)
    bool HasExploded() const;

    UFUNCTION(BlueprintPure)
    float GetOuterEffectRadius() const;

    UFUNCTION(BlueprintCallable)
    void Explode();

protected:
    UFUNCTION(BlueprintNativeEvent)
    void AffectPlayer(const AIGS_GameCharacterFramework* inPlayer) const;

    UFUNCTION(BlueprintNativeEvent)
    void AffectNPC(const AIGS_GameCharacterFramework* inNPC) const;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UPointLightComponent* ExplosionLight;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UParticleSystem* GrenadeParticle;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UNiagaraSystem* NiagaraGrenadeParticle;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UAkAudioEvent* ExplosionSoundAkEvent;

    UPROPERTY()
    UAkSwitchValue* IndoorsAkSwitch;

    UPROPERTY()
    UAkSwitchValue* OutdoorsAkSwitch;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UAkComponent* AkComponent;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float LightFlashTime;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ImpactDistance;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bMakeNoiseAndEvent;

    UPROPERTY(Replicated, VisibleAnywhere)
    bool mR_bIsExploded;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
