#include "IGS_BarrelModData.h"

FIGS_BarrelModData::FIGS_BarrelModData() {
    (*this).IsSuppressor = false;
    (*this).MuzzleFlashParticle = FSoftObjectPath();
    (*this).MuzzleFlashTortillaParticle = FSoftObjectPath();
    (*this).MuzzleFlashStimuliMultiplier = 1.000000000e+00f;
    (*this).ShotSoundStimuliMultiplier = 1.000000000e+00f;
}
