#include "IGS_StimshotEffectDataAsset.h"

UIGS_StimshotEffectDataAsset::UIGS_StimshotEffectDataAsset() {
    (*this).CombatStimshotPostProcessInterface = FSoftObjectPath();
    (*this).CombatStimshotStartPostProcessInterface = FSoftObjectPath();
    (*this).StaminaStimshotPostProcessInterface = FSoftObjectPath();
    (*this).StaminaStimshotStartPostProcessInterface = FSoftObjectPath();
    (*this).AdrenalineStimshotPostProcessInterface = FSoftObjectPath();
    (*this).AdrenalineStimshotStartPostProcessInterface = FSoftObjectPath();
    (*this).StimshotStartWeightCurve = FSoftObjectPath();
    (*this).StimshotEndAkAudioEvent = FSoftObjectPath();
    (*this).EffectFadeDuration = 1.000000000e+00f;
    (*this).EffectStartDuration = 1.000000000e+00f;
}

