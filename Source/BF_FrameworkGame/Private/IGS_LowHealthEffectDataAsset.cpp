#include "IGS_LowHealthEffectDataAsset.h"

UIGS_LowHealthEffectDataAsset::UIGS_LowHealthEffectDataAsset() {
    (*this).LowHealthPostProcessInterface = FSoftObjectPath();
    (*this).LowHealthCurve = FSoftObjectPath();
    (*this).EffectStartAkAudioEvent = FSoftObjectPath();
    (*this).EffectStopAkAudioEvent = FSoftObjectPath();
    (*this).EffectAkRtpc = FSoftObjectPath();
    (*this).AbsoluteLowHealthThreshold = 1.200000000e+02f;
}

