#include "META_TurfWarMissionSave.h"

FMETA_TurfWarMissionSave::FMETA_TurfWarMissionSave() {
    (*this).WarTile = FGameplayTag();
    (*this).EnemyGang = EMETA_Gang::None;
    (*this).PlayersSoldiersAmount = 0;
    (*this).DefenceLostPenaltyMultiplier = 0.000000000e+00f;
}
