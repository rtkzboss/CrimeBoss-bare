#pragma once
#include "CoreMinimal.h"
#include "IGS_AnimationDatabaseBase.h"
#include "IGS_TPP_AI_Throw_Animaitons.h"
#include "IGS_TPP_SlideAnimationData.h"
#include "IGS_TPP_TransitionsAnimationsDefinition.h"
#include "IGS_ThirdPersonSpecailAnimations.h"
#include "IGS_ThirdPersonThrowablesAnimDatabase.generated.h"

class AIGS_ThrowableBase;
class UAimOffsetBlendSpace;
class UAnimMontage;
class UAnimSequence;
class UBlendSpace;
class UBlendSpace1D;
class UBlendSpaceBase;
class UDataAsset;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_ThirdPersonThrowablesAnimDatabase : public FIGS_AnimationDatabaseBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AIGS_ThrowableBase> ID;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* WeaponGripStand;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* WeaponGripCrouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* WeaponGripRun;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* WeaponGripCalm;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* WeaponGripGunDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* Idle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* IdleCrouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* IdleCrouchAIM;
    
    UPROPERTY(EditAnywhere)
    UBlendSpace* Locomotion;
    
    UPROPERTY(EditAnywhere)
    UBlendSpace* LocomotionCrouch;
    
    UPROPERTY(EditAnywhere)
    UBlendSpace* LocomotionSprint;
    
    UPROPERTY(EditAnywhere)
    FIGS_TPP_TransitionsAnimationsDefinition Transitions;
    
    UPROPERTY(EditAnywhere)
    UBlendSpaceBase* TransitionToWalk;
    
    UPROPERTY(EditAnywhere)
    UBlendSpaceBase* TransitionToWalkCrouch;
    
    UPROPERTY(EditAnywhere)
    UBlendSpaceBase* TransitionToIdleL;
    
    UPROPERTY(EditAnywhere)
    UBlendSpaceBase* TransitionToIdleR;
    
    UPROPERTY(EditAnywhere)
    UBlendSpaceBase* TransitionToIdleL_Crouch;
    
    UPROPERTY(EditAnywhere)
    UBlendSpaceBase* TransitionToIdleR_Crouch;
    
    UPROPERTY(EditAnywhere)
    UBlendSpace* RestAimPose;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* Turn;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* TurnCrouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* TurnCrouchAIM;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpace1D* TurnBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpace1D* TurnBlendSpaceCrouch;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* StandToCrouch;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* CrouchToStand;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* JumpStart;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* JumpLoop;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* JumpEnd;
    
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
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponEquip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponUnequip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FirstEquip;
    
    UPROPERTY(EditAnywhere)
    UDataAsset* LightHitReactions;
    
    UPROPERTY(EditAnywhere)
    FIGS_ThirdPersonSpecailAnimations SpecialAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponEquip_Weapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponUnequip_Weapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FirstEquip_Weapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* LeanLeftStand;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* LeanRightStand;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* LeanLeftCrouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* LeanRightCrouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* LeanCrouchUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_TPP_AI_Throw_Animaitons ThrowAIAnimaitons;
    
    UPROPERTY(EditAnywhere)
    FIGS_TPP_SlideAnimationData SlidingAnimations;
    
    UPROPERTY(EditAnywhere)
    bool LeftHandIKEnabled;
    
    UPROPERTY(EditAnywhere)
    bool RightHandIKEnabled;
    
    UPROPERTY(EditAnywhere)
    float LeftHandIKAlpha;
    
    UPROPERTY(EditAnywhere)
    float RightHandIKAlpha;
    
    FIGS_ThirdPersonThrowablesAnimDatabase();
};

