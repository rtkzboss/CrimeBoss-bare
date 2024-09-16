#include "IGS_FlashbangEffectData.h"

FIGS_FlashbangEffectData::FIGS_FlashbangEffectData() {
    (*this).EffectPostProcesses = {};
    (*this).WeightTimeCurve = FSoftObjectPath();
    (*this).EffectDuration = 1.000000000e+00f;
    (*this).EffectAkAudioEvent = FSoftObjectPath();
    (*this).FlashbangEffectAkRtpc = FSoftObjectPath();
    (*this).StunnedElectricStartAkAudioEvent = FSoftObjectPath();
    (*this).StunnedElectricStopAkAudioEvent = FSoftObjectPath();
    (*this).StunnedStartAkAudioEvent = FSoftObjectPath();
    (*this).StunnedStopAkAudioEvent = FSoftObjectPath();
    (*this).ExplosionAroundPlayerPowerTrigger.X = 3.000000119e-01f;
    (*this).ExplosionAroundPlayerPowerTrigger.Y = 6.999999881e-01f;
    (*this).StunnedEffect = FSoftObjectPath();
    (*this).StunnedEffectDuration = 1.000000000e+00f;
    (*this).StunnedElectricEffect = FSoftObjectPath();
    (*this).StunnedElectricEffectDuration = 1.000000000e+00f;
}
