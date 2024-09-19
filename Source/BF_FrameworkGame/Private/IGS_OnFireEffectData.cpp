#include "IGS_OnFireEffectData.h"

FIGS_OnFireEffectData::FIGS_OnFireEffectData() {
    (*this).EffectPostProcesses = TArray<TSoftObjectPtr<UObject>>{};
    (*this).WeightTimeCurve = FSoftObjectPath();
    (*this).EffectDuration = 1.000000000e+00f;
    (*this).EffectStartAkAudioEvent = FSoftObjectPath();
    (*this).EffectEndAkAudioEvent = FSoftObjectPath();
}
