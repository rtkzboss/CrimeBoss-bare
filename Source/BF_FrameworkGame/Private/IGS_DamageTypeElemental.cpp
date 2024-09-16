#include "IGS_DamageTypeElemental.h"

UIGS_DamageTypeElemental::UIGS_DamageTypeElemental() {
    (*this).bShouldBeAffectedByDamageLimiter = true;
    (*this).DamageImpulse = 0.000000000e+00f;
    (*this).DestructibleImpulse = 0.000000000e+00f;
    (*this).DestructibleDamageSpreadScale = 0.000000000e+00f;
}

