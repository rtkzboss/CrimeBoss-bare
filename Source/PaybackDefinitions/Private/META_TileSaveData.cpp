#include "META_TileSaveData.h"

FMETA_TileSaveData::FMETA_TileSaveData() {
    (*this).CurrentGang = EMETA_Gang::None;
    (*this).ConquestState = EMETA_Gang::None;
    (*this).MinAmountOfSoldiersForAttack = 0;
    (*this).MinAmountOfSoldiersForDefence = 0;
    (*this).CurrentStrength = 0;
    (*this).WeaknessLowerTier = false;
    (*this).CurrentWeakness = 0;
    (*this).WeaknessExpireDays = 0;
    (*this).CounterOfCapturesByPlayer = 0;
    (*this).CountdownForAttackAfterLost = 0;
    (*this).Wealth = EMETA_TileWealth::Poor;
    (*this).CaptureRewards = TArray<FMETA_TileRewardData>{};
    (*this).BossEliminationRewards = TArray<FMETA_BossEliminationRewardData>{};
    (*this).IncomeMultiplier = 0.000000000e+00f;
    (*this).IncomeLootItem = FGameplayTag();
}
