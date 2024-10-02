#include "IGS_Meta2FPS_Data.h"
#include "IGS_SpecificSpecialLoot.h"
#include "META_PerkDataToFPS.h"

FIGS_Meta2FPS_Data::FIGS_Meta2FPS_Data() {
    (*this).MissionTag = FGameplayTag();
    (*this).MapName = TEXT("");
    (*this).MissionScenario = FGameplayTag();
    (*this).TileEnvironment = EIGS_TileEnviroment::None;
    (*this).HubDistrict = EIGS_HubDistrict::Downtown;
    (*this).HubVariant = EIGS_HubBackdropTypes::AllRandom;
    (*this).LightingScenario = EIGS_LightingScenarioType::Sunset;
    (*this).ScenarioDifficulty = EIGS_ScenarioDifficulty::SD_MediumForce;
    (*this).FPSDifficulty = EIGS_FPSDifficulty::FD_Normal;
    (*this).Heat = EMETA_Heat::Medium;
    (*this).WantedBadges = 0;
    (*this).IntelLevel = -1;
    (*this).BonusObjectiveID = FGameplayTag();
    (*this).SupportsCleanExecution = false;
    (*this).StartMusic = EIGS_MusicMissionState::None;
    (*this).StartupSource = EIGS_MissionStartupSource::INVALID;
    (*this).MissionSubtype = TEXT("");
    (*this).QPModeSource = EIGS_QPModeSource::INVALID;
    (*this).MissionName = FText::GetEmpty();
    (*this).ObjectiveValue = 0;
    (*this).TotalMissionValue = 0;
    (*this).TotalLootbagCount = -1;
    (*this).SpecificLootTypes = FGameplayTagContainer();
    (*this).SpecialLoot.Loot = TArray<FIGS_SpecificSpecialLoot>{};
    (*this).SpecialLoot.Money = 0;
    (*this).SpecialLoot.bIsFilled = false;
    (*this).Respect = EMETA_RespectLvl::Connected;
    (*this).IsChainMission = false;
    (*this).ChainType = EIGS_ChainType::Unknown;
    (*this).PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).PrimaryEnemyTier = EIGS_AITiers::AT_Tier1;
    (*this).SecondaryEnemyVariation = EIGS_GangsterVariationType::US_Sicarios;
    (*this).SecondaryEnemyTier = EIGS_AITiers::AT_Tier2;
    (*this).SWATVariation = EIGS_SWATVariationType::US_SWAT;
    (*this).SWATTier = EIGS_AITiers::AT_Tier2;
    (*this).AllyVariation = EIGS_HeistersBackupVariationType::US_None;
    (*this).AllyTier = EIGS_AITiers::AT_Tier2;
    (*this).ExpectedPlayerCount = -1;
    (*this).MetaBonuses.ArmyPerkData = TArray<FMETA_PerkDataToFPS>{};
    (*this).ObjectivePercentage = 50;
    (*this).NeedObjectiveCompletion = false;
    (*this).bDownedCharctersSurvive = false;
    (*this).CiviliansAmountOverride = -1;
    (*this).bIsDEBUG = false;
}
