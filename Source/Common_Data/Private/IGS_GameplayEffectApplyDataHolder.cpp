#include "IGS_GameplayEffectApplyDataHolder.h"

FIGS_GameplayEffectApplyDataHolder::FIGS_GameplayEffectApplyDataHolder() {
    (*this).Effect = FSoftObjectPath();
    (*this).RuntimeValueTag = FGameplayTag();
    (*this).RuntimeValue = 0.000000000e+00f;
}
