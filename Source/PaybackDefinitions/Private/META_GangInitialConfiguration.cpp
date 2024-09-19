#include "META_GangInitialConfiguration.h"

FMETA_GangInitialConfiguration::FMETA_GangInitialConfiguration() {
    (*this).InitialTerritoryAmount.Min = 0;
    (*this).InitialTerritoryAmount.Max = 0;
    (*this).TileGroups = TArray<FGameplayTagContainer>{};
    (*this).TopEnemies = TMap<EMETA_Gang, int32>{};
    (*this).Friends = TMap<EMETA_Gang, int32>{};
    (*this).Strategy = EMETA_GangStrategy::Normal;
    (*this).ArmyTier = EMETA_ArmyTier::Low;
}
