#include "IGS_ParticleImpactSettings.h"

FIGS_ParticleImpactSettings::FIGS_ParticleImpactSettings() {
    (*this).ParticleSystemPath = FSoftObjectPath();
    (*this).NiagaraSystemPath = FSoftObjectPath();
    (*this).ParticleDecalIDSoft = FSoftObjectPath();
}
