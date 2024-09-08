#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "IGS_HitInfo.h"
#include "Components/ActorComponent.h"
#include "EIGS_PlayerEffect.h"
#include "IGS_DamageEffectData.h"
#include "IGS_DownStateEffectData.h"
#include "IGS_ExplosionParams.h"
#include "IGS_FallingEffectData.h"
#include "IGS_FlashbangEffectData.h"
#include "IGS_HealthEffectData.h"
#include "IGS_OnFireEffectData.h"
#include "IGS_RainOnCameraEffectData.h"
#include "IGS_StimshotEffectData.h"
#include "IGS_VisorEffectData.h"
#include "IGS_PlayerEffectsComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UAkRtpc;
class UCurveFloat;
class UIGS_CameraComponentBase;
class UMaterialInstance;
class UNiagaraComponent;
class UObject;
class UParticleSystemComponent;
class UTexture;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FIGS_DamageEffectData DamageEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_DownStateEffectData DownStateEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_FallingEffectData FallingEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_FlashbangEffectData FlashbangEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_HealthEffectData HealthEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_VisorEffectData VisorEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_RainOnCameraEffectData RainOnCameraEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_OnFireEffectData OnFireEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_StimshotEffectData StimshotEffectData;
    
private:
    UPROPERTY(VisibleAnywhere)
    float FlashEffectivityMultiplierAttribute;
    
    UPROPERTY(VisibleAnywhere)
    float StunEffectivityMultiplierAttribute;
    
    UPROPERTY(Transient)
    TMap<FString, UMaterialInstance*> m_RequestedMaterialInstances;
    
    UPROPERTY(Instanced, Transient)
    TMap<FString, UParticleSystemComponent*> m_RequestedParticleSystemComponents;
    
    UPROPERTY(Instanced, Transient)
    TMap<FString, UNiagaraComponent*> m_RequestedNiagaraSystemComponents;
    
    UPROPERTY(Transient)
    TMap<FString, UCurveFloat*> m_RequestedCurves;
    
    UPROPERTY(Transient)
    TMap<FString, UAkAudioEvent*> m_RequestedAkAudioEvents;
    
    UPROPERTY(Transient)
    TMap<FString, UAkRtpc*> m_RequestedAkRtpcs;
    
    UPROPERTY(Transient)
    TMap<FString, UTexture*> m_RequestedTextures;
    
    UPROPERTY(Transient)
    TMap<FString, UObject*> m_RequestedBlendableInterfaces;
    
public:
    UIGS_PlayerEffectsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopDrillSparks();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void StopDownstateEffect() const;
    
    UFUNCTION(BlueprintCallable)
    void StartDrillSparks(AActor* inDrillActor);
    
    UFUNCTION(BlueprintCallable)
    void PlayRainOnCameraEffect(bool inEnters);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void PlayFlashbangEffectsWithInstigator(AActor* inTarget, AActor* inInstigator, float inEffectRange) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void PlayFlashbangEffectsWithDurationAndPowerOverride(float inOverrideDuration, float inOverridePower) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void PlayFlashbangEffects(float inDistanceBasedNormalizedPower, float inDOT) const;
    
    UFUNCTION(BlueprintPure)
    void PlayExplosionEffect(const FIGS_ExplosionParams& inExplosionParams) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void PlayDownstateEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnHealthStateChanged(EIGS_HealthState inHealthState) const;
    
    UFUNCTION(BlueprintPure)
    void OnHealthChanged(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) const;
    
    UFUNCTION()
    void OnDrillDestroyed(AActor* inDrillActor);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PlayFlashbangEffectsWithDurationAndPower_Internal(float inOverrideDuration, float inOverridePower);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PlayFlashbangEffects_Internal(float inDistanceBasedNormalizedPower, float inDOT);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PlayExplosionEffects(const FIGS_ExplosionParams& inExplosionParams) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeCamera(UIGS_CameraComponentBase* inCamera, TArray<EIGS_PlayerEffect> inEffectsToRebind, bool inChangeCameraForAll);
    
};

