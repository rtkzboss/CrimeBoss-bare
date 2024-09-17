#include "IGS_ImpactParameters.h"
#include "EIGS_MovementSlope.h"
#include "GameplayTagContainer.h"

FIGS_ImpactParameters::FIGS_ImpactParameters() {
    (*this).SoundParameters.FootstepParameters.UseThis = false;
    (*this).SoundParameters.FootstepParameters.WalkSpeed = 0.000000000e+00f;
    (*this).SoundParameters.FootstepParameters.SlopeType = EIGS_MovementSlope::FSW_Normal;
    (*this).SoundParameters.FootstepParameters.FootstepAkSwitch = nullptr;
    (*this).SoundParameters.FootstepParameters.ShoeAkSwitch = nullptr;
    (*this).SoundParameters.MeleeParameters.UseThis = false;
    (*this).SoundParameters.MeleeParameters.WeaponNameAkSwitch = nullptr;
    (*this).SoundParameters.HitParameters.UseThis = false;
    (*this).SoundParameters.HitParameters.Mass = 0.000000000e+00f;
    (*this).SoundParameters.HitParameters.Velocity = 0.000000000e+00f;
    (*this).SoundParameters.HitParameters.Instigator = nullptr;
    (*this).SoundParameters.HitParameters.Cooldown = 0.000000000e+00f;
    (*this).SoundParameters.CustomAkComponent = nullptr;
    (*this).SoundParameters.PhysicalSurface = 0;
    (*this).SoundParameters.IsPlayer = false;
    (*this).SoundParameters.IgnoreOptimizations = false;
    (*this).SoundParameters.PoolTags = FGameplayTagContainer();
    (*this).ParticleParameters.Power = 1.000000000e+00f;
    (*this).ParticleParameters.AttachToComponent = nullptr;
    (*this).ParticleParameters.BoneName = NAME_None;
    (*this).ParticleParameters.IgnoreOptimizations = false;
    (*this).ParticleParameters.PoolTags = FGameplayTagContainer();
    (*this).DecalParameters.RandomRoll = true;
    (*this).DecalParameters.RollDegree = 0.000000000e+00f;
    (*this).DecalParameters.AttachToSocket = NAME_None;
    (*this).DecalParameters.AttachToComponent = nullptr;
    (*this).DecalParameters.IgnoreOptimizations = false;
    (*this).DecalParameters.PoolTags = FGameplayTagContainer();
    (*this).ID = nullptr;
    (*this).SpawnTransform = FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
}
