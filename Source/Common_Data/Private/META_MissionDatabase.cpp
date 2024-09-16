#include "META_MissionDatabase.h"
#include "EIGS_AITiers.h"
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
#include "EMETA_RespectLvl.h"
#include "EMETA_ReturnedDataProcessingMode.h"
#include "EMETA_StealthMode.h"
#include "EMETA_TradeVendor.h"
#include "EMETA_TurfActionAfterSuccess.h"

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
    (*this).MissionInfo.WeaponsRequired = {};
    (*this).MissionInfo.CharactersRequired = {};
    (*this).MissionInfo.CharactersRequiredButNotOwned = {};
    (*this).MissionInfo.ResultsWhenJobIsNotRemovedFromTheMap = {};
    (*this).MissionInfo.ReturnedDataProcessingMode = EMETA_ReturnedDataProcessingMode::AcceptLoot;
    (*this).MissionInfo.LootPercentageFromSuccess = 0;
    (*this).MissionInfo.TurfActionAfterSuccess = EMETA_TurfActionAfterSuccess::None;
    (*this).MissionInfo.StrengthChangeIntensity = EMETA_AIBossStrengthChangeIntensity::None;
    (*this).MissionInfo.FPSMissionInfo.FPSMissionID = nullptr;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).MissionInfo.FPSMissionInfo.Scenario, 0)) = NAME_None;
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
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionInfo.FPSMissionInfo.SupportedLoot, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionInfo.FPSMissionInfo.SupportedLoot, 0)) = {};
    (*this).MissionInfo.FPSMissionInfo.TotalLootbagCount = -1;
    (*this).MissionInfo.FPSMissionInfo.ForcedDetectivesCount = 0;
    (*this).MissionInfo.FPSMissionInfo.Parameters = {};
    (*this).MissionInfo.FPSMissionInfo.StealthMode = EMETA_StealthMode::NotAvailable;
    (*this).MissionInfo.FPSMissionInfo.bDownedCharctersSurvive = false;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).MissionInfo.ObjectivesPreset, 0)) = NAME_None;
    (*this).MissionInfo.UnlockRespect = EMETA_RespectLvl::Low;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).MissionInfo.UnlockTag, 0)) = NAME_None;
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionInfo.LootType, 0)) = {};
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionInfo.LootType, 0)) = {};
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionInfo.MissionTypeTags, 0)) = {};
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionInfo.MissionTypeTags, 0)) = {};
    (*this).TradeInfo.CutsceneID = FText::GetEmpty();
    (*this).TradeInfo.DebugText = FText::GetEmpty();
    (*this).TradeInfo.Picture = FSoftObjectPath();
    (*this).TradeInfo.MapIconOverride = FSoftObjectPath();
    (*this).TradeInfo.ExpensesMap = {};
    (*this).TradeInfo.Expenses = {};
    (*this).TradeInfo.Name = FText::GetEmpty();
    (*this).TradeInfo.Description = FText::GetEmpty();
    (*this).TradeInfo.DaysOnMap = -1;
    (*this).TradeInfo.MinCrewSize = 1;
    (*this).TradeInfo.MaxCrewSize = 4;
    (*this).TradeInfo.CharactersRequired = {};
    (*this).TradeInfo.CharactersRequiredButNotOwned = {};
    (*this).TradeInfo.ResultsWhenJobIsNotRemovedFromTheMap = {};
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
    (*this).CinematicInfo.CharactersRequired = {};
    (*this).CinematicInfo.CharactersRequiredButNotOwned = {};
    (*this).CinematicInfo.ResultsWhenJobIsNotRemovedFromTheMap = {};
    (*this).CinematicInfo.DistrictType = EIGS_HubDistrict::INVALID;
    (*this).CinematicInfo.BackdropType = EIGS_HubBackdropTypes::AllRandom;
    (*this).AmbushInfo.Name = FText::GetEmpty();
    (*this).AmbushInfo.Description = FText::GetEmpty();
    (*this).AmbushInfo.Picture = FSoftObjectPath();
    (*this).AmbushInfo.MapIconOverride = FSoftObjectPath();
    (*this).AmbushInfo.FPSMissionInfo.FPSMissionID = nullptr;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).AmbushInfo.FPSMissionInfo.Scenario, 0)) = NAME_None;
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
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AmbushInfo.FPSMissionInfo.SupportedLoot, 0)) = {};
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AmbushInfo.FPSMissionInfo.SupportedLoot, 0)) = {};
    (*this).AmbushInfo.FPSMissionInfo.TotalLootbagCount = -1;
    (*this).AmbushInfo.FPSMissionInfo.ForcedDetectivesCount = 0;
    (*this).AmbushInfo.FPSMissionInfo.Parameters = {};
    (*this).AmbushInfo.FPSMissionInfo.StealthMode = EMETA_StealthMode::NotAvailable;
    (*this).AmbushInfo.FPSMissionInfo.bDownedCharctersSurvive = false;
    (*this).RivalAttack.Name = FText::GetEmpty();
    (*this).RivalAttack.Description = FText::GetEmpty();
    (*this).RivalAttack.Picture = FSoftObjectPath();
    (*this).RivalAttack.MapIconOverride = FSoftObjectPath();
    (*this).RivalAttack.FPSMissionInfo.FPSMissionID = nullptr;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).RivalAttack.FPSMissionInfo.Scenario, 0)) = NAME_None;
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
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RivalAttack.FPSMissionInfo.SupportedLoot, 0)) = {};
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RivalAttack.FPSMissionInfo.SupportedLoot, 0)) = {};
    (*this).RivalAttack.FPSMissionInfo.TotalLootbagCount = -1;
    (*this).RivalAttack.FPSMissionInfo.ForcedDetectivesCount = 0;
    (*this).RivalAttack.FPSMissionInfo.Parameters = {};
    (*this).RivalAttack.FPSMissionInfo.StealthMode = EMETA_StealthMode::NotAvailable;
    (*this).RivalAttack.FPSMissionInfo.bDownedCharctersSurvive = false;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).RivalAttack.UnlockTag, 0)) = NAME_None;
    (*this).NeutralAttack.Name = FText::GetEmpty();
    (*this).NeutralAttack.Description = FText::GetEmpty();
    (*this).NeutralAttack.Picture = FSoftObjectPath();
    (*this).NeutralAttack.MapIconOverride = FSoftObjectPath();
    (*this).Defence.Name = FText::GetEmpty();
    (*this).Defence.Description = FText::GetEmpty();
    (*this).Defence.Picture = FSoftObjectPath();
    (*this).Defence.MapIconOverride = FSoftObjectPath();
    (*this).Defence.FPSMissionInfo.FPSMissionID = nullptr;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Defence.FPSMissionInfo.Scenario, 0)) = NAME_None;
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
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Defence.FPSMissionInfo.SupportedLoot, 0)) = {};
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Defence.FPSMissionInfo.SupportedLoot, 0)) = {};
    (*this).Defence.FPSMissionInfo.TotalLootbagCount = -1;
    (*this).Defence.FPSMissionInfo.ForcedDetectivesCount = 0;
    (*this).Defence.FPSMissionInfo.Parameters = {};
    (*this).Defence.FPSMissionInfo.StealthMode = EMETA_StealthMode::NotAvailable;
    (*this).Defence.FPSMissionInfo.bDownedCharctersSurvive = false;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Defence.UnlockTag, 0)) = NAME_None;
    (*this).TradeDeal.CutsceneID = FText::GetEmpty();
    (*this).TradeDeal.DebugText = FText::GetEmpty();
    (*this).TradeDeal.Picture = FSoftObjectPath();
    (*this).TradeDeal.MapIconOverride = FSoftObjectPath();
    (*this).TradeDeal.Name = FText::GetEmpty();
    (*this).TradeDeal.Description = FText::GetEmpty();
    (*this).TradeDeal.DaysOnMap = -1;
    (*this).TradeDeal.MinCrewSize = 1;
    (*this).TradeDeal.MaxCrewSize = 4;
    (*this).TradeDeal.CharactersRequired = {};
    (*this).TradeDeal.CharactersRequiredButNotOwned = {};
    (*this).TradeDeal.ResultsWhenJobIsNotRemovedFromTheMap = {};
    (*this).TradeDeal.Vendor = EMETA_TradeVendor::UNDEFINED;
    (*this).CanAmbushAppear = false;
    (*this).AmbushOverrideIDs = {};
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).AmbushOverrideChance, 0)) = NAME_None;
    (*this).AmbushResultOverridesTotalMissionResult = false;
    (*this).AmbushGang = EMETA_AmbushGang::None;
    (*this).DebriefType = EMETA_DebriefType::Standard;
    (*this).PlacementPriority = EMETA_PlacementPriority::Default;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).SpecialPositionTag, 0)) = NAME_None;
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AllowedTiles, 0)) = {};
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AllowedTiles, 0)) = {};
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RestrictedTiles, 0)) = {};
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RestrictedTiles, 0)) = {};
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
}
