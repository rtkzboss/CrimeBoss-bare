#include "PlayerAnimationsDatabase.h"

FPlayerAnimationsDatabase::FPlayerAnimationsDatabase() {
    (*this).ID = FSoftObjectPath();
    (*this).AttackType = {};
    (*this).WeaponGripStand = nullptr;
    (*this).WeaponGripCrouch = nullptr;
    (*this).WeaponGripRun = nullptr;
    (*this).WeaponGripCalm = nullptr;
    (*this).WeaponGripGunDown = nullptr;
    (*this).Idle = nullptr;
    (*this).IdleCrouch = nullptr;
    (*this).IdleCrouchAIM = nullptr;
    (*this).Locomotion = nullptr;
    (*this).LocomotionCrouch = nullptr;
    (*this).LocomotionSprint = nullptr;
    (*this).Transitions.TransitionToWalkL = nullptr;
    (*this).Transitions.TransitionToWalkCrouchL = nullptr;
    (*this).Transitions.TransitionToWalkR = nullptr;
    (*this).Transitions.TransitionToWalkCrouchR = nullptr;
    (*this).Transitions.TransitionToIdleL = nullptr;
    (*this).Transitions.TransitionToIdleR = nullptr;
    (*this).Transitions.TransitionToIdleL_Crouch = nullptr;
    (*this).Transitions.TransitionToIdleR_Crouch = nullptr;
    (*this).RestAimPose = nullptr;
    (*this).TurnBlendSpace = nullptr;
    (*this).TurnBlendSpaceCrouch = nullptr;
    (*this).StandToCrouch = nullptr;
    (*this).CrouchToStand = nullptr;
    (*this).JumpStart = nullptr;
    (*this).JumpLoop = nullptr;
    (*this).JumpEnd = nullptr;
    (*this).WeaponAimOffset = nullptr;
    (*this).WeaponAimOffsetCrouch = nullptr;
    (*this).WeaponAimOffsetAim = nullptr;
    (*this).WeaponAimOffsetAimCrouch = nullptr;
    (*this).WeaponAimOffsetLow = nullptr;
    (*this).WeaponReload = nullptr;
    (*this).WeaponReloadEmptyMagazine = nullptr;
    (*this).WeaponReloadCombat = nullptr;
    (*this).WeaponReloadCombatEmptyMagazine = nullptr;
    (*this).ReloadCheck = nullptr;
    (*this).ReloadCheck_Weapon = nullptr;
    (*this).WeaponReload_WeaponActor = nullptr;
    (*this).WeaponReloadEmptyMagazine_WeaponActor = nullptr;
    (*this).WeaponReloadCombat_WeaponActor = nullptr;
    (*this).WeaponReloadCombatEmptyMagazine_WeaponActor = nullptr;
    (*this).WeaponEquip = nullptr;
    (*this).WeaponUnequip = nullptr;
    (*this).WeaponEquip_Weapon = nullptr;
    (*this).WeaponUnequip_Weapon = nullptr;
    (*this).FirstEquip = nullptr;
    (*this).FirstEquip_Weapon = nullptr;
    (*this).LeanLeftStand = nullptr;
    (*this).LeanRightStand = nullptr;
    (*this).LeanLeftCrouch = nullptr;
    (*this).LeanRightCrouch = nullptr;
    (*this).LeanCrouchUp = nullptr;
    (*this).CoverPeekAnimations = nullptr;
    (*this).Melee = nullptr;
    (*this).MeleeCrouch = nullptr;
    (*this).MeleePush = nullptr;
    (*this).MeleePushWeapon = nullptr;
    (*this).SlidingAnimations.Weapon_Slide_Aim_Offset = nullptr;
    (*this).SlidingAnimations.Slide_In = nullptr;
    (*this).SlidingAnimations.Slide_Loop = nullptr;
    (*this).SlidingAnimations.Slide_Out_Run = nullptr;
    (*this).SlidingAnimations.Slide_Out_Crouch_Idle = nullptr;
    (*this).SlidingAnimations.Slide_Out_Idle = nullptr;
    (*this).SlidingAnimations.Slide_Out_Crouch_Walk = nullptr;
    (*this).ModInfo = {};
    (*this).LightHitReactions = nullptr;
    (*this).MediumHitReactions = nullptr;
    (*this).HeavyHitReactions = nullptr;
    (*this).AvoidanceAnimations = nullptr;
    (*this).SpecialActions = {};
    (*this).SpecialAnimations.WalkieTalkieEquipMontage = nullptr;
    (*this).SpecialAnimations.HandsetEquipMontage = nullptr;
    (*this).SpecialAnimations.OpenDoorInteractionMontage = nullptr;
    (*this).SpecialAnimations.CloseDoorInteractionMontage = nullptr;
    (*this).SpecialAnimations.PickupInteractionMontage = nullptr;
    (*this).SpecialAnimations.WalkieTalkieEquipWeaponMontage = nullptr;
    (*this).SpecialAnimations.HandsetEquipWeaponMontage = nullptr;
    (*this).SpecialAnimations.OpenDoorInteractionWeaponMontage = nullptr;
    (*this).SpecialAnimations.CloseDoorInteractionWeaponMontage = nullptr;
    (*this).SpecialAnimations.PickupInteractionWeaponMontage = nullptr;
    (*this).OneHandCalmWeaponPose = false;
    (*this).LeftHandIKEnabled = true;
    (*this).RightHandIKEnabled = true;
    (*this).LeftHandIKAlpha = 0.000000000e+00f;
    (*this).RightHandIKAlpha = 0.000000000e+00f;
}
