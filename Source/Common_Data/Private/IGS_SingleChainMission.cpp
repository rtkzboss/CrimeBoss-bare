#include "IGS_SingleChainMission.h"

FIGS_SingleChainMission::FIGS_SingleChainMission() {
    (*this).ID = nullptr;
    (*this).FPSMissionID = nullptr;
    (*this).Scenario = FGameplayTag();
    (*this).LightingScenario = EIGS_LightingScenarioType::Morning;
    (*this).BackdropType = EIGS_HubBackdropTypes::AllRandom;
    (*this).TileEnviroment = EIGS_TileEnviroment::None;
    (*this).PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).SecondaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).SWATVariation = EIGS_SWATVariationType::US_None;
    (*this).AllyVariation = EIGS_HeistersBackupVariationType::US_None;
    (*this).Parameters = {};
}
