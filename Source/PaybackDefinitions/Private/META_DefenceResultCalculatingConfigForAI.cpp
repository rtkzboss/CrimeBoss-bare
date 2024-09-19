#include "META_DefenceResultCalculatingConfigForAI.h"

FMETA_DefenceResultCalculatingConfigForAI::FMETA_DefenceResultCalculatingConfigForAI() {
    (*this).BaseChance = 60;
    (*this).DefenceChancePerMissingTurf = 4;
    (*this).ChanceTweakingPerArmyTierDifference = 15;
    (*this).ChanceTweakingIfItIsLastTileOfGang = 10;
    (*this).InfluenceByDefenderCurrentStrategy = TMap<EMETA_GangStrategy, int32>{};
    (*this).InfluenceByAttackerCurrentStrategy = TMap<EMETA_GangStrategy, int32>{};
}
