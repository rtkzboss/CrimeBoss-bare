#include "IGS_DownStateEffectDataAsset.h"

UIGS_DownStateEffectDataAsset::UIGS_DownStateEffectDataAsset() {
    (*this).DownedEffectPostProcessInterface = FSoftObjectPath();
    (*this).DyingEffectPostProcessInterface = FSoftObjectPath();
    (*this).ReviveEffectPostProcessInterface = FSoftObjectPath();
    (*this).DownedEffectWeightCurve = FSoftObjectPath();
    (*this).DyingEffectWeightCurve = FSoftObjectPath();
    (*this).ReviveEffectWeightCurve = FSoftObjectPath();
    (*this).EffectBakerDownedAkAudioEvent = FSoftObjectPath();
    (*this).EffectStartAkAudioEvent = FSoftObjectPath();
    (*this).EffectStopAkAudioEvent = FSoftObjectPath();
    (*this).EffectAkRtpc = FSoftObjectPath();
    (*this).ReviveEffectDuration = 4.000000000e+00f;
}

