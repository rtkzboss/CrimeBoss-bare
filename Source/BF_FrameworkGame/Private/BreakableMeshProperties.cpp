#include "BreakableMeshProperties.h"

FBreakableMeshProperties::FBreakableMeshProperties() {
    (*this).ChainedComponentsToBreak = {};
    (*this).mR_IsBroken = false;
    (*this).mR_IsMaterialSwitched = false;
    (*this).bCanTakeBulletDamage = true;
    (*this).bCanTakeMeleeDamage = true;
    (*this).bCanTakeExplosiveDamage = true;
    (*this).bCanTakeBreachExplosiveDamage = false;
    (*this).HealthToSwitchMaterial = 0;
    (*this).bSimulatePhysicsOnBreak = false;
    (*this).BreakOtherComponents = {};
    (*this).StaticMeshBroken = nullptr;
    (*this).ParticleBreak = nullptr;
    (*this).ParticleInstanceParameters = {};
    (*this).ParticleSpawnOffset = FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
    (*this).MaterialsOnBreak = {};
    (*this).AkEventOnBreak = nullptr;
    (*this).AkEventOnImpact = nullptr;
}
