#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterLeaningDirectionEnum.h"
#include "EIGS_HealthState.h"
#include "EIGS_ReloadInterruptReasonEnum.h"
#include "EIGS_WeaponAttackType.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_LeanSide.h"
#include "EIGS_CombatStatus.h"
#include "EIGS_SlideEnumState.h"
#include "EIGS_VentShaftAnimationStates.h"
#include "IGS_ActiveMontageHolder.h"
#include "IGS_AimAnimationInfo.h"
#include "IGS_ArmsLeaningAnimationOneFrameParams.h"
#include "IGS_ArmsLocomotion.h"
#include "IGS_AttackAnimtionDefinition.h"
#include "IGS_CameraEffectsAnimations.h"
#include "IGS_FPP_AnimationAdditive.h"
#include "IGS_FPP_HandIKSettings.h"
#include "IGS_FirstPersonAdditiveAnimations.h"
#include "IGS_FirstPersonAnimationDatabase.h"
#include "IGS_FirstPersonMeleeAnimDatabase.h"
#include "IGS_FirstPersonSpecialAnimations.h"
#include "IGS_FirstPersonThrowablesAnimDatabase.h"
#include "IGS_GameEventsAnimInstance.h"
#include "IGS_HolsterAnimationInfo.h"
#include "IGS_ModAnimationDefinition.h"
#include "IGS_MontageInstanceHolder.h"
#include "IGS_RappelAnimationsInfo.h"
#include "IGS_UArmsAniminstance.generated.h"

class AIGS_PlayerCharacter;
class AIGS_PlayerFPVArms;
class AIGS_WeaponBase;
class AIGS_WieldableBase;
class UIGS_ReloaderBase;
class UIGS_UWeaponAniminstance;

UCLASS(NonTransient)
class BF_ANIMATIONS_API UIGS_UArmsAniminstance : public UIGS_GameEventsAnimInstance {
    GENERATED_BODY()
public:
    UIGS_UArmsAniminstance();

    UFUNCTION(BlueprintImplementableEvent)
    void SimpleLadder_Leave(bool InUp);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SimpleLadder_JumpDown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SimpleLadder_InputUp(float inSpeed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SimpleLadder_InputDown(float inSpeed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SimpleLadder_Grab_Start(bool InUp);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SimpleLadder_Grab_Finish(bool InUp);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestStopCustomAnimation(FGameplayTag inAnimationType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestStopCameraShake(FGameplayTag inCameraShakeTag, float inIntensity);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestPlayCustomAnimation(FGameplayTag inAnimationType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestPlayCameraShake(FGameplayTag inCameraShakeTag, float inIntensity);
    
    UFUNCTION(BlueprintCallable)
    void PlayHolsterChangeAnimation(bool inIsHolstering, bool inSkipAnimation, float inHolsterTimeInSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZiplineStart_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZiplineEnd_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponShooterChange_Event(EIGS_WeaponAttackType InWeaponAttackType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnEquipEnded_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSlideStarted_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSlideEnded_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnReloadMontageNotifyAddAmmoToWeapon() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReloadInterrupt_Event(EIGS_ReloadInterruptReasonEnum inReason);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPushPlayerAwayStarted(FVector InDirection);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMagCheckInterrupt_Event();
    
    UFUNCTION(BlueprintCallable)
    void OnMagCheckEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInspectInterrupt_Event();
    
    UFUNCTION(BlueprintCallable)
    void OnInspectEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEquipEnded_Event();
    
    UFUNCTION(BlueprintPure)
    void OnDownstateChanged(EIGS_HealthState& outDownState) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCharacterFell(float inFallHeight);
    
    UFUNCTION(BlueprintCallable)
    FIGS_FirstPersonAnimationDatabase GetWeaponAnimations();
    
    UFUNCTION(BlueprintCallable)
    FIGS_FirstPersonThrowablesAnimDatabase GetThrowablesAnimationsDatabase();
    
    UFUNCTION(BlueprintCallable)
    FIGS_FirstPersonMeleeAnimDatabase GetMeleeAnimationsDatabase();
    
    UFUNCTION(BlueprintPure)
    void GetHolsterAnimationData(FIGS_HolsterAnimationInfo& outHolsterAnimationInfo) const;
    
    UFUNCTION(BlueprintPure)
    EIGS_WeaponAttackType GetAttackType() const;
    
    UFUNCTION(BlueprintPure)
    void GetAimAnimationData(FIGS_AimAnimationInfo& outAimAnimationInfo) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ArmsInit_Event();
    
    UPROPERTY(BlueprintReadWrite)
    EIGS_SlideEnumState SlideState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_ArmsLocomotion LocomotionAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_FirstPersonAdditiveAnimations AdditiveAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_FPP_AnimationAdditive FPP_AnimationAdditive;
    
    UPROPERTY(BlueprintReadOnly)
    FIGS_FPP_HandIKSettings HandIK;
    
    UPROPERTY(BlueprintReadOnly)
    FIGS_ModAnimationDefinition ModAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AnimationSetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableFirstEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FirstEquipAlways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CharacterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CharacterDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CharacterCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CharacterJump;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CharacterIsShooting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CharacterIsReloading;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReloadPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SemiAutoShootingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IdleSwayIntensityAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlopeNormalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool GrenadePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LootBagHand;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ReloadInterruptUseEvents;
    
    UPROPERTY(BlueprintReadOnly)
    float MontageRemainingTime;
    
    UPROPERTY(BlueprintReadOnly)
    FVector RootOffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CharacterLeaningDirectionEnum LeaningDirection;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_LeanSide RequestedLeanSide;
    
    UPROPERTY(BlueprintReadOnly)
    FIGS_ArmsLeaningAnimationOneFrameParams LeansInfo;
    
    UPROPERTY(BlueprintReadWrite)
    EIGS_CombatStatus CombatStatus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_CameraEffectsAnimations CameraEffectsAnimations;
    
    UPROPERTY(EditAnywhere)
    float CrouchingAdsOffset;
    
    UPROPERTY(EditAnywhere)
    float JumpingCameraOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsUnarmed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsUnequipBlendedOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OneHandCalmWeaponPose;
    
    UPROPERTY(BlueprintReadWrite)
    bool SpecialActionMontageActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_VentShaftAnimationStates VentShaftStates;
    
    UPROPERTY(BlueprintReadOnly)
    FIGS_FirstPersonSpecialAnimations SpecialAnimations;
    
    UPROPERTY(BlueprintReadOnly)
    FIGS_RappelAnimationsInfo RappelAnimationInfo;
    
    UPROPERTY(BlueprintReadOnly)
    float CameraBobIntensity;
    
private:
    UPROPERTY(Transient)
    AIGS_PlayerFPVArms* m_PlayerArms;
    
    UPROPERTY(Transient)
    AIGS_PlayerCharacter* m_PlayerCharacter;
    
    UPROPERTY(Transient)
    AIGS_WeaponBase* m_WeaponBase;
    
    UPROPERTY(Transient)
    AIGS_WieldableBase* m_WieldabelBase;
    
    UPROPERTY(Instanced, Transient)
    UIGS_ReloaderBase* m_ReloadBase;
    
    UPROPERTY()
    FIGS_MontageInstanceHolder m_MontageInstanceHolder;
    
    UPROPERTY()
    FIGS_ActiveMontageHolder m_ActiveMontageHolder;
    
    UPROPERTY()
    FIGS_AttackAnimtionDefinition m_AnimationTypeData;
    
    UPROPERTY(Transient)
    UIGS_UWeaponAniminstance* m_TPV_AnimInstance;
    
    UPROPERTY(Transient)
    UIGS_UWeaponAniminstance* m_Weapon_AnimInstance;
    
};

