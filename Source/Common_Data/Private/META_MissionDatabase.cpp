#include "META_MissionDatabase.h"
#include "EIGS_AITiers.h"
#include "EIGS_CharacterID.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_HeistersBackupVariationType.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_HubDistrict.h"
#include "EIGS_LightingScenarioType.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TileEnviroment.h"
#include "EMETA_AIBossStrengthChangeIntensity.h"
#include "EMETA_FPSMissionSubtype.h"
#include "EMETA_Heat.h"
#include "EMETA_JobResult.h"
#include "EMETA_RespectLvl.h"
#include "EMETA_ReturnedDataProcessingMode.h"
#include "EMETA_StealthMode.h"
#include "EMETA_TradeVendor.h"
#include "EMETA_TurfActionAfterSuccess.h"
#include "META_TradeExpense.h"
#include "META_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"

FMETA_MissionDatabase::FMETA_MissionDatabase() {
    (*this).ID = nullptr;
    (*this).MissionType = EMETA_JobType::FPSMission;
    (*this).MissionInfo.MissionSubtype = EMETA_FPSMissionSubtype::Story;
    (*this).MissionInfo.Picture = FSoftObjectPath();
    (*this).MissionInfo.MapIconOverride = FSoftObjectPath();
    (*this).MissionInfo.Name = FText::GetEmpty();
    (*this).MissionInfo.Objective = FText::GetEmpty();
    (*this).MissionInfo.Description = FText::GetEmpty();
    (*this).MissionInfo.DaysOnMap = -1;
    (*this).MissionInfo.SupportIntel = false;
    (*this).MissionInfo.IntelSoldierMultiplier = 1.000000000e+00f;
    (*this).MissionInfo.MinCrewSize = 1;
    (*this).MissionInfo.MaxCrewSize = 4;
    (*this).MissionInfo.WeaponsRequired = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).MissionInfo.CharactersRequired = TArray<EIGS_CharacterID>{};
    (*this).MissionInfo.CharactersRequiredButNotOwned = TArray<EIGS_CharacterID>{};
    (*this).MissionInfo.ResultsWhenJobIsNotRemovedFromTheMap = TArray<EMETA_JobResult>{};
    (*this).MissionInfo.ReturnedDataProcessingMode = EMETA_ReturnedDataProcessingMode::AcceptLoot;
    (*this).MissionInfo.LootPercentageFromSuccess = 0;
    (*this).MissionInfo.TurfActionAfterSuccess = EMETA_TurfActionAfterSuccess::None;
    (*this).MissionInfo.StrengthChangeIntensity = EMETA_AIBossStrengthChangeIntensity::None;
    (*this).MissionInfo.FPSMissionInfo.FPSMissionID = nullptr;
    (*this).MissionInfo.FPSMissionInfo.Scenario = FGameplayTag();
    (*this).MissionInfo.FPSMissionInfo.LightingScenario = EIGS_LightingScenarioType::Morning;
    (*this).MissionInfo.FPSMissionInfo.BackdropType = EIGS_HubBackdropTypes::AllRandom;
    (*this).MissionInfo.FPSMissionInfo.TileEnviroment = EIGS_TileEnviroment::None;
    (*this).MissionInfo.FPSMissionInfo.NeedObjectiveCompletion = false;
    (*this).MissionInfo.FPSMissionInfo.PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).MissionInfo.FPSMissionInfo.SecondaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).MissionInfo.FPSMissionInfo.SWATVariation = EIGS_SWATVariationType::US_None;
    (*this).MissionInfo.FPSMissionInfo.AllyVariation = EIGS_HeistersBackupVariationType::US_None;
    (*this).MissionInfo.FPSMissionInfo.bForceEnemyTier = false;
    (*this).MissionInfo.FPSMissionInfo.EnemyTier = EIGS_AITiers::AT_Tier1;
    (*this).MissionInfo.FPSMissionInfo.bForceSWATTier = false;
    (*this).MissionInfo.FPSMissionInfo.SWATTier = EIGS_AITiers::AT_Tier1;
    (*this).MissionInfo.FPSMissionInfo.bForceAllyTier = false;
    (*this).MissionInfo.FPSMissionInfo.AllyTier = EIGS_AITiers::AT_Tier1;
    (*this).MissionInfo.FPSMissionInfo.bForceDifficulty = false;
    (*this).MissionInfo.FPSMissionInfo.Difficulty = EIGS_ScenarioDifficulty::SD_MediumForce;
    (*this).MissionInfo.FPSMissionInfo.bForceHeat = false;
    (*this).MissionInfo.FPSMissionInfo.bMinimalHeatOnly = false;
    (*this).MissionInfo.FPSMissionInfo.Heat = EMETA_Heat::Medium;
    (*this).MissionInfo.FPSMissionInfo.SupportedLoot = FGameplayTagContainer();
    (*this).MissionInfo.FPSMissionInfo.TotalLootbagCount = -1;
    (*this).MissionInfo.FPSMissionInfo.ForcedDetectivesCount = 0;
    (*this).MissionInfo.FPSMissionInfo.Parameters = TMap<FGameplayTag, int32>{};
    (*this).MissionInfo.FPSMissionInfo.StealthMode = EMETA_StealthMode::NotAvailable;
    (*this).MissionInfo.FPSMissionInfo.bDownedCharctersSurvive = false;
    (*this).MissionInfo.ObjectivesPreset = FGameplayTag();
    (*this).MissionInfo.UnlockRespect = EMETA_RespectLvl::Low;
    (*this).MissionInfo.UnlockTag = FGameplayTag();
    (*this).MissionInfo.LootType = FGameplayTagContainer();
    (*this).MissionInfo.MissionTypeTags = FGameplayTagContainer();
    (*this).TradeInfo.CutsceneID = FText::GetEmpty();
    (*this).TradeInfo.DebugText = FText::GetEmpty();
    (*this).TradeInfo.Picture = FSoftObjectPath();
    (*this).TradeInfo.MapIconOverride = FSoftObjectPath();
    (*this).TradeInfo.ExpensesMap = TMap<FGameplayTag, FGameplayTag>{};
    (*this).TradeInfo.Expenses = TArray<FMETA_TradeExpense>{};
    (*this).TradeInfo.Name = FText::GetEmpty();
    (*this).TradeInfo.Description = FText::GetEmpty();
    (*this).TradeInfo.DaysOnMap = -1;
    (*this).TradeInfo.MinCrewSize = 1;
    (*this).TradeInfo.MaxCrewSize = 4;
    (*this).TradeInfo.CharactersRequired = TArray<EIGS_CharacterID>{};
    (*this).TradeInfo.CharactersRequiredButNotOwned = TArray<EIGS_CharacterID>{};
    (*this).TradeInfo.ResultsWhenJobIsNotRemovedFromTheMap = TArray<EMETA_JobResult>{};
    (*this).TradeInfo.DistrictType = EIGS_HubDistrict::Downtown;
    (*this).TradeInfo.BackdropType = EIGS_HubBackdropTypes::AllRandom;
    (*this).CinematicInfo.CutsceneID = FText::GetEmpty();
    (*this).CinematicInfo.DebugText = FText::GetEmpty();
    (*this).CinematicInfo.Picture = FSoftObjectPath();
    (*this).CinematicInfo.MapIconOverride = FSoftObjectPath();
    (*this).CinematicInfo.Name = FText::GetEmpty();
    (*this).CinematicInfo.Description = FText::GetEmpty();
    (*this).CinematicInfo.DaysOnMap = -1;
    (*this).CinematicInfo.MinCrewSize = 1;
    (*this).CinematicInfo.MaxCrewSize = 4;
    (*this).CinematicInfo.CharactersRequired = TArray<EIGS_CharacterID>{};
    (*this).CinematicInfo.CharactersRequiredButNotOwned = TArray<EIGS_CharacterID>{};
    (*this).CinematicInfo.ResultsWhenJobIsNotRemovedFromTheMap = TArray<EMETA_JobResult>{};
    (*this).CinematicInfo.DistrictType = EIGS_HubDistrict::INVALID;
    (*this).CinematicInfo.BackdropType = EIGS_HubBackdropTypes::AllRandom;
    (*this).AmbushInfo.Name = FText::GetEmpty();
    (*this).AmbushInfo.Description = FText::GetEmpty();
    (*this).AmbushInfo.Picture = FSoftObjectPath();
    (*this).AmbushInfo.MapIconOverride = FSoftObjectPath();
    (*this).AmbushInfo.FPSMissionInfo.FPSMissionID = nullptr;
    (*this).AmbushInfo.FPSMissionInfo.Scenario = FGameplayTag();
    (*this).AmbushInfo.FPSMissionInfo.LightingScenario = EIGS_LightingScenarioType::Morning;
    (*this).AmbushInfo.FPSMissionInfo.BackdropType = EIGS_HubBackdropTypes::AllRandom;
    (*this).AmbushInfo.FPSMissionInfo.TileEnviroment = EIGS_TileEnviroment::None;
    (*this).AmbushInfo.FPSMissionInfo.NeedObjectiveCompletion = false;
    (*this).AmbushInfo.FPSMissionInfo.PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).AmbushInfo.FPSMissionInfo.SecondaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).AmbushInfo.FPSMissionInfo.SWATVariation = EIGS_SWATVariationType::US_None;
    (*this).AmbushInfo.FPSMissionInfo.AllyVariation = EIGS_HeistersBackupVariationType::US_None;
    (*this).AmbushInfo.FPSMissionInfo.bForceEnemyTier = false;
    (*this).AmbushInfo.FPSMissionInfo.EnemyTier = EIGS_AITiers::AT_Tier1;
    (*this).AmbushInfo.FPSMissionInfo.bForceSWATTier = false;
    (*this).AmbushInfo.FPSMissionInfo.SWATTier = EIGS_AITiers::AT_Tier1;
    (*this).AmbushInfo.FPSMissionInfo.bForceAllyTier = false;
    (*this).AmbushInfo.FPSMissionInfo.AllyTier = EIGS_AITiers::AT_Tier1;
    (*this).AmbushInfo.FPSMissionInfo.bForceDifficulty = false;
    (*this).AmbushInfo.FPSMissionInfo.Difficulty = EIGS_ScenarioDifficulty::SD_MediumForce;
    (*this).AmbushInfo.FPSMissionInfo.bForceHeat = false;
    (*this).AmbushInfo.FPSMissionInfo.bMinimalHeatOnly = false;
    (*this).AmbushInfo.FPSMissionInfo.Heat = EMETA_Heat::Medium;
    (*this).AmbushInfo.FPSMissionInfo.SupportedLoot = FGameplayTagContainer();
    (*this).AmbushInfo.FPSMissionInfo.TotalLootbagCount = -1;
    (*this).AmbushInfo.FPSMissionInfo.ForcedDetectivesCount = 0;
    (*this).AmbushInfo.FPSMissionInfo.Parameters = TMap<FGameplayTag, int32>{};
    (*this).AmbushInfo.FPSMissionInfo.StealthMode = EMETA_StealthMode::NotAvailable;
    (*this).AmbushInfo.FPSMissionInfo.bDownedCharctersSurvive = false;
    (*this).RivalAttack.Name = FText::GetEmpty();
    (*this).RivalAttack.Description = FText::GetEmpty();
    (*this).RivalAttack.Picture = FSoftObjectPath();
    (*this).RivalAttack.MapIconOverride = FSoftObjectPath();
    (*this).RivalAttack.FPSMissionInfo.FPSMissionID = nullptr;
    (*this).RivalAttack.FPSMissionInfo.Scenario = FGameplayTag();
    (*this).RivalAttack.FPSMissionInfo.LightingScenario = EIGS_LightingScenarioType::Morning;
    (*this).RivalAttack.FPSMissionInfo.BackdropType = EIGS_HubBackdropTypes::AllRandom;
    (*this).RivalAttack.FPSMissionInfo.TileEnviroment = EIGS_TileEnviroment::None;
    (*this).RivalAttack.FPSMissionInfo.NeedObjectiveCompletion = false;
    (*this).RivalAttack.FPSMissionInfo.PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).RivalAttack.FPSMissionInfo.SecondaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).RivalAttack.FPSMissionInfo.SWATVariation = EIGS_SWATVariationType::US_None;
    (*this).RivalAttack.FPSMissionInfo.AllyVariation = EIGS_HeistersBackupVariationType::US_None;
    (*this).RivalAttack.FPSMissionInfo.bForceEnemyTier = false;
    (*this).RivalAttack.FPSMissionInfo.EnemyTier = EIGS_AITiers::AT_Tier1;
    (*this).RivalAttack.FPSMissionInfo.bForceSWATTier = false;
    (*this).RivalAttack.FPSMissionInfo.SWATTier = EIGS_AITiers::AT_Tier1;
    (*this).RivalAttack.FPSMissionInfo.bForceAllyTier = false;
    (*this).RivalAttack.FPSMissionInfo.AllyTier = EIGS_AITiers::AT_Tier1;
    (*this).RivalAttack.FPSMissionInfo.bForceDifficulty = false;
    (*this).RivalAttack.FPSMissionInfo.Difficulty = EIGS_ScenarioDifficulty::SD_MediumForce;
    (*this).RivalAttack.FPSMissionInfo.bForceHeat = false;
    (*this).RivalAttack.FPSMissionInfo.bMinimalHeatOnly = false;
    (*this).RivalAttack.FPSMissionInfo.Heat = EMETA_Heat::Medium;
    (*this).RivalAttack.FPSMissionInfo.SupportedLoot = FGameplayTagContainer();
    (*this).RivalAttack.FPSMissionInfo.TotalLootbagCount = -1;
    (*this).RivalAttack.FPSMissionInfo.ForcedDetectivesCount = 0;
    (*this).RivalAttack.FPSMissionInfo.Parameters = TMap<FGameplayTag, int32>{};
    (*this).RivalAttack.FPSMissionInfo.StealthMode = EMETA_StealthMode::NotAvailable;
    (*this).RivalAttack.FPSMissionInfo.bDownedCharctersSurvive = false;
    (*this).RivalAttack.UnlockTag = FGameplayTag();
    (*this).NeutralAttack.Name = FText::GetEmpty();
    (*this).NeutralAttack.Description = FText::GetEmpty();
    (*this).NeutralAttack.Picture = FSoftObjectPath();
    (*this).NeutralAttack.MapIconOverride = FSoftObjectPath();
    (*this).Defence.Name = FText::GetEmpty();
    (*this).Defence.Description = FText::GetEmpty();
    (*this).Defence.Picture = FSoftObjectPath();
    (*this).Defence.MapIconOverride = FSoftObjectPath();
    (*this).Defence.FPSMissionInfo.FPSMissionID = nullptr;
    (*this).Defence.FPSMissionInfo.Scenario = FGameplayTag();
    (*this).Defence.FPSMissionInfo.LightingScenario = EIGS_LightingScenarioType::Morning;
    (*this).Defence.FPSMissionInfo.BackdropType = EIGS_HubBackdropTypes::AllRandom;
    (*this).Defence.FPSMissionInfo.TileEnviroment = EIGS_TileEnviroment::None;
    (*this).Defence.FPSMissionInfo.NeedObjectiveCompletion = false;
    (*this).Defence.FPSMissionInfo.PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).Defence.FPSMissionInfo.SecondaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).Defence.FPSMissionInfo.SWATVariation = EIGS_SWATVariationType::US_None;
    (*this).Defence.FPSMissionInfo.AllyVariation = EIGS_HeistersBackupVariationType::US_None;
    (*this).Defence.FPSMissionInfo.bForceEnemyTier = false;
    (*this).Defence.FPSMissionInfo.EnemyTier = EIGS_AITiers::AT_Tier1;
    (*this).Defence.FPSMissionInfo.bForceSWATTier = false;
    (*this).Defence.FPSMissionInfo.SWATTier = EIGS_AITiers::AT_Tier1;
    (*this).Defence.FPSMissionInfo.bForceAllyTier = false;
    (*this).Defence.FPSMissionInfo.AllyTier = EIGS_AITiers::AT_Tier1;
    (*this).Defence.FPSMissionInfo.bForceDifficulty = false;
    (*this).Defence.FPSMissionInfo.Difficulty = EIGS_ScenarioDifficulty::SD_MediumForce;
    (*this).Defence.FPSMissionInfo.bForceHeat = false;
    (*this).Defence.FPSMissionInfo.bMinimalHeatOnly = false;
    (*this).Defence.FPSMissionInfo.Heat = EMETA_Heat::Medium;
    (*this).Defence.FPSMissionInfo.SupportedLoot = FGameplayTagContainer();
    (*this).Defence.FPSMissionInfo.TotalLootbagCount = -1;
    (*this).Defence.FPSMissionInfo.ForcedDetectivesCount = 0;
    (*this).Defence.FPSMissionInfo.Parameters = TMap<FGameplayTag, int32>{};
    (*this).Defence.FPSMissionInfo.StealthMode = EMETA_StealthMode::NotAvailable;
    (*this).Defence.FPSMissionInfo.bDownedCharctersSurvive = false;
    (*this).Defence.UnlockTag = FGameplayTag();
    (*this).TradeDeal.CutsceneID = FText::GetEmpty();
    (*this).TradeDeal.DebugText = FText::GetEmpty();
    (*this).TradeDeal.Picture = FSoftObjectPath();
    (*this).TradeDeal.MapIconOverride = FSoftObjectPath();
    (*this).TradeDeal.Name = FText::GetEmpty();
    (*this).TradeDeal.Description = FText::GetEmpty();
    (*this).TradeDeal.DaysOnMap = -1;
    (*this).TradeDeal.MinCrewSize = 1;
    (*this).TradeDeal.MaxCrewSize = 4;
    (*this).TradeDeal.CharactersRequired = TArray<EIGS_CharacterID>{};
    (*this).TradeDeal.CharactersRequiredButNotOwned = TArray<EIGS_CharacterID>{};
    (*this).TradeDeal.ResultsWhenJobIsNotRemovedFromTheMap = TArray<EMETA_JobResult>{};
    (*this).TradeDeal.Vendor = EMETA_TradeVendor::UNDEFINED;
    (*this).CanAmbushAppear = false;
    (*this).AmbushOverrideIDs = TArray<TSubclassOf<UMETA_MissionID>>{};
    (*this).AmbushOverrideChance = FGameplayTag();
    (*this).AmbushResultOverridesTotalMissionResult = false;
    (*this).AmbushGang = EMETA_AmbushGang::None;
    (*this).DebriefType = EMETA_DebriefType::Standard;
    (*this).PlacementPriority = EMETA_PlacementPriority::Default;
    (*this).SpecialPositionTag = FGameplayTag();
    (*this).AllowedTiles = FGameplayTagContainer();
    (*this).RestrictedTiles = FGameplayTagContainer();
    (*this).EntitlementTag = FGameplayTag();
}
