#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpecialActionType.h"
#include "IGS_AnimationDatabaseBase.h"
#include "IGS_TPP_ModAnimationDefinition.h"
#include "IGS_TPP_SlideAnimationData.h"
#include "IGS_TPP_TransitionsAnimationsDefinition.h"
#include "IGS_TPVAnimtionDefinition.h"
#include "IGS_ThirdPersonSpecailAnimations.h"
#include "PlayerAnimationsDatabase.generated.h"

class AIGS_WeaponBase;
class UAimOffsetBlendSpace;
class UAnimMontage;
class UAnimSequence;
class UBlendSpace;
class UBlendSpace1D;
class UDataAsset;
class UIGS_AvoidanceAnimationDataTable;
class UIGS_CoverAnimationsTable;
class UIGS_HeavyHitReactionTable;
class UIGS_MediumHitReactionsTable;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FPlayerAnimationsDatabase : public FIGS_AnimationDatabaseBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AIGS_WeaponBase> ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_TPVAnimtionDefinition> AttackType;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* WeaponGripStand;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* WeaponGripCrouch;
    
    UPROPERTY(EditAnywhere)
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
    UBlendSpace* RestAimPose;
    
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
    UAnimMontage* WeaponReload;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadEmptyMagazine;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadCombat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadCombatEmptyMagazine;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadCheck;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadCheck_Weapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReload_WeaponActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadEmptyMagazine_WeaponActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadCombat_WeaponActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadCombatEmptyMagazine_WeaponActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponEquip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponUnequip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponEquip_Weapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponUnequip_Weapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FirstEquip;
    
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
    UIGS_CoverAnimationsTable* CoverPeekAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* Melee;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* MeleeCrouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* MeleePush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* MeleePushWeapon;
    
    UPROPERTY(EditAnywhere)
    FIGS_TPP_SlideAnimationData SlidingAnimations;
    
    UPROPERTY(EditAnywhere)
    TArray<FIGS_TPP_ModAnimationDefinition> ModInfo;
    
    UPROPERTY(EditAnywhere)
    UDataAsset* LightHitReactions;
    
    UPROPERTY(EditAnywhere)
    UIGS_MediumHitReactionsTable* MediumHitReactions;
    
    UPROPERTY(EditAnywhere)
    UIGS_HeavyHitReactionTable* HeavyHitReactions;
    
    UPROPERTY(EditAnywhere)
    UIGS_AvoidanceAnimationDataTable* AvoidanceAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EIGS_SpecialActionType, UAnimMontage*> SpecialActions;
    
    UPROPERTY(EditAnywhere)
    FIGS_ThirdPersonSpecailAnimations SpecialAnimations;
    
    UPROPERTY(EditAnywhere)
    bool OneHandCalmWeaponPose;
    
    UPROPERTY(EditAnywhere)
    bool LeftHandIKEnabled;
    
    UPROPERTY(EditAnywhere)
    bool RightHandIKEnabled;
    
    UPROPERTY(EditAnywhere)
    float LeftHandIKAlpha;
    
    UPROPERTY(EditAnywhere)
    float RightHandIKAlpha;
    
    FPlayerAnimationsDatabase();
};

