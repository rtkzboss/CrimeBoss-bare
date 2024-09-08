#pragma once
#include "CoreMinimal.h"
#include "EIGS_WorldWidgetType.h"
#include "IGS_ThrowableProjectileBase.h"
#include "IGS_GrenadeProjectileBase.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UAkAudioEvent;
class UAkComponent;
class UAkSwitchValue;
class UIGS_WorldSpaceWidgetBase;
class UNiagaraSystem;
class UParticleSystem;
class UPointLightComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_GrenadeProjectileBase : public AIGS_ThrowableProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UPointLightComponent* ExplosionLight;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UParticleSystem* GrenadeParticle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UNiagaraSystem* NiagaraGrenadeParticle;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_WorldSpaceWidgetBase* GrenadeIndicatorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UAkAudioEvent* ExplosionSoundAkEvent;
    
    UPROPERTY()
    UAkSwitchValue* IndoorsAkSwitch;
    
    UPROPERTY()
    UAkSwitchValue* OutdoorsAkSwitch;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EIGS_WorldWidgetType IndicatorWidgetTypePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EIGS_WorldWidgetType IndicatorWidgetTypeAI;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float IndicatorAppearTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float LightFlashTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ImpactDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bMakeNoiseAndEvent;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    bool mR_bIsExploded;
    
public:
    AIGS_GrenadeProjectileBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void SetIndicatorIconWidget() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void PlayEffect();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartExplosionTimer(float inTimeToExplode);
    
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
    
};

