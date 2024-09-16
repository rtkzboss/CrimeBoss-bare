#pragma once
#include "CoreMinimal.h"
#include "IGS_AnimationDatabaseBase.h"
#include "IGS_TPP_Carryable_Animations.h"
#include "IGS_TPP_SlideAnimationData.h"
#include "IGS_TPP_TransitionsAnimationsDefinition.h"
#include "IGS_ThirdPersonCarryablesAnimDatabase.generated.h"

class AIGS_CarryableBase;
class UAimOffsetBlendSpace;
class UAnimMontage;
class UAnimSequence;
class UBlendSpace1D;
class UBlendSpace;
class UDataAsset;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_ThirdPersonCarryablesAnimDatabase : public FIGS_AnimationDatabaseBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AIGS_CarryableBase> ID;

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
    FIGS_TPP_Carryable_Animations CarryableAnimations;

    UPROPERTY(EditAnywhere)
    FIGS_TPP_SlideAnimationData SlidingAnimations;

    UPROPERTY(EditAnywhere)
    UDataAsset* LightHitReactions;

    UPROPERTY(EditAnywhere)
    bool LeftHandIKEnabled;

    UPROPERTY(EditAnywhere)
    bool RightHandIKEnabled;

    UPROPERTY(EditAnywhere)
    float LeftHandIKAlpha;

    UPROPERTY(EditAnywhere)
    float RightHandIKAlpha;

    FIGS_ThirdPersonCarryablesAnimDatabase();
};
