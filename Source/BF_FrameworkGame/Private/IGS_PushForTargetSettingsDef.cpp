#include "IGS_PushForTargetSettingsDef.h"

FIGS_PushForTargetSettingsDef::FIGS_PushForTargetSettingsDef() {
    (*this).CombatRangeReduction = TMap<EIGS_PushForTarget, float>{};
    (*this).AfterControlIntensity = EIGS_PushForTarget::High;
}
