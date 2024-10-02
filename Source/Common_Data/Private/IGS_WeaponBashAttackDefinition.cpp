#include "IGS_WeaponBashAttackDefinition.h"

FIGS_WeaponBashAttackDefinition::FIGS_WeaponBashAttackDefinition() {
    (*this).AttackType = EIGS_MeleeAttackType::MAT_Bash;
    (*this).TraceType = EIGS_MeleeTraceType::MTT_Sphere;
    (*this).DamageType = nullptr;
    (*this).ImpactType = nullptr;
    (*this).BaseDamage = 5.000000000e+01f;
    (*this).MaxTargets = 1;
    (*this).MaxRange = 1.000000000e+02f;
    (*this).TraceRadius = 3.000000000e+01f;
    (*this).SwingMainTraceRadius = 3.000000000e+01f;
    (*this).SwingTraceAngle = 9.000000000e+01f;
}
