#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterState.h"
#include "EIGS_ReloadInterruptReasonEnum.h"
#include "EIGS_WeaponAttackType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/PoseSnapshot.h"
#include "GameplayTagContainer.h"
#include "EIGS_LeanSide.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_WieldableSlot.h"
#include "EIGS_FacialEmotionIdles.h"
#include "EIGS_FacialEmotionStates.h"
#include "EIGS_SlideEnumState.h"
#include "IGS_CharacterAnimInstance.h"
#include "IGS_FaceExpressionInfo.h"
#include "IGS_PlayerAnimationReloader.h"
#include "IGS_RappelAnimationsInfo.h"
#include "IGS_TPP_Carryable_Animations.h"
#include "IGS_TPP_ModAnimationDefinition.h"
#include "IGS_TPP_SlideAnimationData.h"
#include "IGS_TPP_TransitionsAnimationsDefinition.h"
#include "IGS_TPVAnimtionDefinition.h"
#include "IGS_ThirdPersonCarryablesAnimDatabase.h"
#include "IGS_ThirdPersonWeaponAnimations.h"
#include "PlayerAnimationsDatabase.h"
#include "TPP_ActionSlotType.h"
#include "IGS_PlayerAnimInstance.generated.h"

class AIGS_WieldableBase;
class UAimOffsetBlendSpace;
class UAnimMontage;
class UAnimSequence;
class UBlendSpace;
class UBlendSpace1D;
class UIGS_InventoryObjectFramework;

UCLASS(NonTransient)
class BF_ANIMATIONS_API UIGS_PlayerAnimInstance : public UIGS_CharacterAnimInstance {
    GENERATED_BODY()
public:
    UIGS_PlayerAnimInstance();

    UFUNCTION(BlueprintImplementableEvent)
    void ZiptieStarted_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ZiplineStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ZiplineEnded();
    
    UFUNCTION(BlueprintCallable)
    void TriggerAnimationEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ThrowAwayLoot_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void StunnedStart_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void StunnedEnd_Event();
    
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
    
    UFUNCTION(BlueprintCallable)
    void SetIsInLocomotionState(bool inIsInLocomotion);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestStopCustomAnimation(FGameplayTag inAnimationType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestPlayCustomAnimation(FGameplayTag inAnimationType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RappelLeaveStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void RappelGrabStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PushCargo_Event();
    
    UFUNCTION(BlueprintCallable)
    void PlayHolsterChangeAnimation(bool inIsHolstering, bool inSkipAnimation, float inHolsterTimeInSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PickupInteraction_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OpenDoor_Event();
    
    UFUNCTION(BlueprintCallable)
    void OnZiptieFinished();
    
private:
    UFUNCTION()
    void OnWieldableSlotChange(EIGS_WieldableSlot Type, AIGS_WieldableBase* inWieldable, UIGS_InventoryObjectFramework* inWeaponObject);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponShooterChange_Event(EIGS_WeaponAttackType InWeaponAttackType);
    
private:
    UFUNCTION()
    void OnWeaponObjectChange(AIGS_WieldableBase* InWeaponBase);
    
    UFUNCTION()
    void OnWeaponAimChange(bool IsAiming);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnEquipEnded_Event();
    
    UFUNCTION(BlueprintCallable)
    void OnStoodUp();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSlideTransitionEnded_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSlideStarted_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSlideEnded_Event();
    
    UFUNCTION(BlueprintCallable)
    void OnReviveStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReloadInterrupt_Event(EIGS_ReloadInterruptReasonEnum inReason);
    
    UFUNCTION(BlueprintCallable)
    void OnReactionAnimFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPushPlayerStarted(FVector InDirection);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerBotInitialize(bool inIsBot);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMagCheckInterrupt_Event();
    
    UFUNCTION(BlueprintCallable)
    void OnMagCheckEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnGotToGround();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEquipEnded_Event();
    
    UFUNCTION(BlueprintCallable)
    void OnDownstateStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnDownStateInputEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnDownStateInputDisabled() const;
    
    UFUNCTION(BlueprintCallable)
    void OnDownStateDeath();
    
private:
    UFUNCTION()
    void OnBeginReload(bool inIsCombat, bool inIsEmptyMagazine);
    
    UFUNCTION()
    void OnAttack();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void LootCollectionStart_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void LootCollectionEnd_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void LootBagPickup_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HasDisabledPropCollisionChanged_Event(bool inHasDisabledPropCollision);
    
    UFUNCTION(BlueprintImplementableEvent)
    void GrenadeThrow_Event(TPP_ActionSlotType InAction, bool inLow);
    
    UFUNCTION(BlueprintPure)
    int32 GetReplicatedRandomInt(int32 inMin, int32 inMax) const;
    
    UFUNCTION(BlueprintPure)
    float GetReplicatedRandomFloat(float inMin, float inMax) const;
    
    UFUNCTION(BlueprintCallable)
    FIGS_ThirdPersonCarryablesAnimDatabase GetCarryableDatabse();
    
    UFUNCTION(BlueprintPure)
    void GetAnimationDatabase(FPlayerAnimationsDatabase& AnimDatabase) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void FlashedStart_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FlashedEnd_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EmployeeReaction_Stop();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EmployeeReaction_Start();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CloseDoor_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CarryableThrow_Event(bool inLow);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ReloadInterruptUseEvents;
    
    UPROPERTY(BlueprintReadOnly)
    FIGS_TPP_Carryable_Animations CarryableAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DeathPoseSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CharacterState CharacterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsInCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AimSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPanicLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGetDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGetDownKneel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGetDownScary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bZiptieStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PanicPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEmployeeReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLookAtAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLookAtDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FixFemaleHandsIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LootBagHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsRMAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableFootIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsSwatAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsPlayerAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NavlinkLeftMatching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NavlinkRightMatching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsNotMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShieldOnBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsInCar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator CarRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LocationInCar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAvoidancePoseEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsCoverLeaning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OneHandCalmWeaponPose;
    
    UPROPERTY(BlueprintReadWrite)
    UAnimMontage* LeanLeftStand;
    
    UPROPERTY(BlueprintReadWrite)
    UAnimMontage* LeanRightStand;
    
    UPROPERTY(BlueprintReadWrite)
    UAnimMontage* LeanLeftCrouch;
    
    UPROPERTY(BlueprintReadWrite)
    UAnimMontage* LeanRightCrouch;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_LeanSide RequestedLeanSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_FaceExpressionInfo ExpressionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_FacialEmotionStates FacialAnimationStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_FacialEmotionIdles FacialAnimationIdles;
    
    UPROPERTY(BlueprintReadWrite)
    FPoseSnapshot HeadSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EquipPoseSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EquipSwitchblend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableFirstEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Is_Shooting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Is_Reloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReloadPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* WeaponGripStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* WeaponGripCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* WeaponGripRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* WeaponGripCalm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* WeaponGripGunDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAimOffsetBlendSpace* WeaponAimOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAimOffsetBlendSpace* WeaponAimOffsetCrouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAimOffsetBlendSpace* WeaponAimOffsetAim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAimOffsetBlendSpace* WeaponAimOffsetAimCrouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAimOffsetBlendSpace* WeaponAimOffsetLow;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimMontage* WeaponFireStandFront;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimMontage* WeaponFireStandFrontInjured;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimMontage* WeaponReloadStandInjured;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimMontage* WeaponFireCrouchLeft;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimMontage* WeaponFireCrouchFront;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimMontage* WeaponFireCrouchRight;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimMontage* WeaponFireWeaponMesh;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimMontage* WeaponReload;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimMontage* WeaponEquip;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimMontage* WeaponUnequip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* Idle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* IdleCrouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* IdleCrouchAIM;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpace* Locomotion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpace* LocomotionCrouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpace* LocomotionSprint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_TPP_TransitionsAnimationsDefinition Transitions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpace1D* TurnBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpace1D* TurnBlendSpaceCrouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* StandToCrouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* CrouchToStand;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* JumpStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* JumpLoop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* JumpEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Reload;
    
    UPROPERTY(Transient)
    FIGS_PlayerAnimationReloader m_TPPReloader;
    
    UPROPERTY(Transient)
    FIGS_ThirdPersonWeaponAnimations m_TPPShooter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Is_Controlled_by_AI;
    
    UPROPERTY(BlueprintReadWrite)
    FVector AdvancedMoveInteractionLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator RappelRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ForceMoveState;
    
    UPROPERTY(BlueprintReadWrite)
    EIGS_SlideEnumState SlideState;
    
    UPROPERTY(BlueprintReadOnly)
    FIGS_RappelAnimationsInfo RappelAnimationInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool LeftHandIKEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RightHandIKEnabled;
    
    UPROPERTY()
    FIGS_TPVAnimtionDefinition m_AnimationTypeData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_TPP_SlideAnimationData SlidingAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FirstEquipAlways;
    
    UPROPERTY(BlueprintReadOnly)
    FIGS_TPP_ModAnimationDefinition ModAnimation;
    
    UPROPERTY(BlueprintReadWrite)
    bool DisableHolsterAnimation;
    
};

