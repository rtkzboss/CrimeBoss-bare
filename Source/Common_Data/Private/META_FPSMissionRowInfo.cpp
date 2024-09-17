#include "META_FPSMissionRowInfo.h"
#include "EIGS_AITiers.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_HeistersBackupVariationType.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_LightingScenarioType.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TileEnviroment.h"
#include "EMETA_Heat.h"
#include "EMETA_StealthMode.h"

FMETA_FPSMissionRowInfo::FMETA_FPSMissionRowInfo() {
    (*this).MissionSubtype = EMETA_FPSMissionSubtype::Story;
    (*this).Picture = FSoftObjectPath();
    (*this).MapIconOverride = FSoftObjectPath();
    (*this).Name = FText::GetEmpty();
    (*this).Objective = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).DaysOnMap = -1;
    (*this).SupportIntel = false;
    (*this).IntelSoldierMultiplier = 1.000000000e+00f;
    (*this).MinCrewSize = 1;
    (*this).MaxCrewSize = 4;
    (*this).WeaponsRequired = {};
    (*this).CharactersRequired = {};
    (*this).CharactersRequiredButNotOwned = {};
    (*this).ResultsWhenJobIsNotRemovedFromTheMap = {};
    (*this).ReturnedDataProcessingMode = EMETA_ReturnedDataProcessingMode::AcceptLoot;
    (*this).LootPercentageFromSuccess = 0;
    (*this).TurfActionAfterSuccess = EMETA_TurfActionAfterSuccess::None;
    (*this).StrengthChangeIntensity = EMETA_AIBossStrengthChangeIntensity::None;
    (*this).FPSMissionInfo.FPSMissionID = nullptr;
    (*this).FPSMissionInfo.Scenario = FGameplayTag();
    (*this).FPSMissionInfo.LightingScenario = EIGS_LightingScenarioType::Morning;
    (*this).FPSMissionInfo.BackdropType = EIGS_HubBackdropTypes::AllRandom;
    (*this).FPSMissionInfo.TileEnviroment = EIGS_TileEnviroment::None;
    (*this).FPSMissionInfo.NeedObjectiveCompletion = false;
    (*this).FPSMissionInfo.PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).FPSMissionInfo.SecondaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).FPSMissionInfo.SWATVariation = EIGS_SWATVariationType::US_None;
    (*this).FPSMissionInfo.AllyVariation = EIGS_HeistersBackupVariationType::US_None;
    (*this).FPSMissionInfo.bForceEnemyTier = false;
    (*this).FPSMissionInfo.EnemyTier = EIGS_AITiers::AT_Tier1;
    (*this).FPSMissionInfo.bForceSWATTier = false;
    (*this).FPSMissionInfo.SWATTier = EIGS_AITiers::AT_Tier1;
    (*this).FPSMissionInfo.bForceAllyTier = false;
    (*this).FPSMissionInfo.AllyTier = EIGS_AITiers::AT_Tier1;
    (*this).FPSMissionInfo.bForceDifficulty = false;
    (*this).FPSMissionInfo.Difficulty = EIGS_ScenarioDifficulty::SD_MediumForce;
    (*this).FPSMissionInfo.bForceHeat = false;
    (*this).FPSMissionInfo.bMinimalHeatOnly = false;
    (*this).FPSMissionInfo.Heat = EMETA_Heat::Medium;
    (*this).FPSMissionInfo.SupportedLoot = FGameplayTagContainer();
    (*this).FPSMissionInfo.TotalLootbagCount = -1;
    (*this).FPSMissionInfo.ForcedDetectivesCount = 0;
    (*this).FPSMissionInfo.Parameters = {};
    (*this).FPSMissionInfo.StealthMode = EMETA_StealthMode::NotAvailable;
    (*this).FPSMissionInfo.bDownedCharctersSurvive = false;
    (*this).ObjectivesPreset = FGameplayTag();
    (*this).UnlockRespect = EMETA_RespectLvl::Low;
    (*this).UnlockTag = FGameplayTag();
    (*this).LootType = FGameplayTagContainer();
    (*this).MissionTypeTags = FGameplayTagContainer();
}
