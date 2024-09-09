#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeaponAttackType.h"
#include "Components/ActorComponent.h"
#include "ScalableFloat.h"
#include "Templates/SubclassOf.h"
#include "IGS_ShooterBase.generated.h"

class AIGS_ProjectileBase;
class UAkAudioEvent;
class UAkRtpc;
class UAkSwitchValue;
class UForceFeedbackEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ShooterBase : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_ShooterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TEST_SetWeaponModeEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void TEST_SetVibrationModeEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void TEST_PlusWeaponStrength();
    
    UFUNCTION(BlueprintCallable)
    void TEST_PlusWeaponStartPosition();
    
    UFUNCTION(BlueprintCallable)
    void TEST_PlusWeaponEndPosition();
    
    UFUNCTION(BlueprintCallable)
    void TEST_PlusVibrationPosition();
    
    UFUNCTION(BlueprintCallable)
    void TEST_PlusVibrationFrequency();
    
    UFUNCTION(BlueprintCallable)
    void TEST_PlusVibrationAmplitude();
    
    UFUNCTION(BlueprintCallable)
    void TEST_MinusWeaponStrength();
    
    UFUNCTION(BlueprintCallable)
    void TEST_MinusWeaponStartPosition();
    
    UFUNCTION(BlueprintCallable)
    void TEST_MinusWeaponEndPosition();
    
    UFUNCTION(BlueprintCallable)
    void TEST_MinusVibrationPosition();
    
    UFUNCTION(BlueprintCallable)
    void TEST_MinusVibrationFrequency();
    
    UFUNCTION(BlueprintCallable)
    void TEST_MinusVibrationAmplitude();
    
    UFUNCTION(BlueprintPure)
    int32 TEST_GetWeaponStrength() const;
    
    UFUNCTION(BlueprintPure)
    int32 TEST_GetWeaponStartPosittion() const;
    
    UFUNCTION(BlueprintPure)
    int32 TEST_GetWeaponEndPosition() const;
    
    UFUNCTION(BlueprintPure)
    int32 TEST_GetVibrationPosition() const;
    
    UFUNCTION(BlueprintPure)
    int32 TEST_GetVibrationFrequency() const;
    
    UFUNCTION(BlueprintPure)
    int32 TEST_GetVibrationAmplitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDualSenseTriggers() const;
    
    UFUNCTION(BlueprintCallable)
    void ResetDualSenseTriggers();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnShooterStopAttack();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnShooterBeginAttack();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnProjectileActivated(AIGS_ProjectileBase* inProjectile);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnProjectileAcquired(AIGS_ProjectileBase* inProjectile);
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShootFromCamera;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    bool bIsSuppressed;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_WeaponAttackType ShooterType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsExtraFireMode;
    
    UPROPERTY()
    TSubclassOf<AIGS_ProjectileBase> m_ProjectileClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* SingleShotAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* EmptyShotAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* HipAimAkEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* SightsAimAkEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkSwitchValue* NormalStateAkSwitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkSwitchValue* SuppressedStateAkSwitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkSwitchValue* NormalFireModeStateAkSwitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkSwitchValue* ExtraFireModeStateAkSwitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkRtpc* FireRateAkRtpc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkRtpc* RoundsLeftAkRtpc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkRtpc* AdsAkRtpc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UForceFeedbackEffect* ForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bForceFeedbackLooped;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ForceFeedbackName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FScalableFloat ShotgunHorizontalSpreadMultiplier;
    
};

