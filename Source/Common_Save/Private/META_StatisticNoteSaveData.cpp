#include "META_StatisticNoteSaveData.h"
#include "EMETA_CareerCompletionReason.h"
#include "EMETA_CareerStatus.h"

FMETA_StatisticNoteSaveData::FMETA_StatisticNoteSaveData() {
    (*this).CrewStatistic.HiredGenericHeisters = 0;
    (*this).CrewStatistic.LostGenericHeisters = 0;
    (*this).CrewStatistic.HiredUniqueHeisters = 0;
    (*this).CrewStatistic.PromotedToVeteran = 0;
    (*this).CrewStatistic.PromotedToElite = 0;
    (*this).CrewStatistic.LostUniqueHeisters = 0;
    (*this).CrewStatistic.DeserterUniqueHeisters = 0;
    (*this).CrewStatistic.DeserterHeisters = 0;
    (*this).CrewStatistic.ArrestedHeisters = 0;
    (*this).CrewStatistic.MissingUniqueHeisters = 0;
    (*this).CrewStatistic.MissingHeisters = 0;
    (*this).CrewStatistic.HeistersStatisticData = {};
    (*this).MissionsStatistic.FinishedMissions = {};
    (*this).MissionsStatistic.FinishedMissionsDependsFromStars = {};
    (*this).MissionsStatistic.LostMissions = {};
    (*this).MissionsStatistic.FinishedBigHeists = {};
    (*this).MissionsStatistic.CountOftFinishedBigHeists = 0;
    (*this).MissionsStatistic.CountOfLostBigHeists = 0;
    (*this).MissionsStatistic.FinishedMissionWithoutKills = {};
    (*this).MissionsStatistic.MissionWithStels = 0;
    (*this).MissionsStatistic.FinishedMissionWithStels = 0;
    (*this).MissionsStatistic.PlayedAmbushes = 0;
    (*this).MissionsStatistic.SurvivedAmbushes = 0;
    (*this).MissionsStatistic.PlayedWarehouseSiege = 0;
    (*this).GoalsStatistic.FinishedGoalsID = {};
    (*this).GoalsStatistic.FailedGoalsID = {};
    (*this).CampaignStatistic.DaysPlayed = 0;
    (*this).CampaignStatistic.CampaignStatus = EMETA_CareerStatus::None;
    (*this).CampaignStatistic.CareerCompletionReason = EMETA_CareerCompletionReason::NoTurfTiles;
    (*this).CampaignStatistic.ScoreForCampaign = 0;
    (*this).FPSStatistic.KilledGangsters = 0;
    (*this).FPSStatistic.KilledSecurityPersonnel = 0;
    (*this).FPSStatistic.KilledDetectives = 0;
    (*this).FPSStatistic.KilledCivilians = 0;
    (*this).StoryStatistic.PlotlinesFinished = {};
    (*this).EconomyStatistic.BankruptcyCount = 0;
    (*this).EconomyStatistic.SuccessfullyFinishedTrades = 0;
    (*this).EconomyStatistic.WeaponsBought = {};
    (*this).EconomyStatistic.SpentMoney = 0;
    (*this).EconomyStatistic.EarnedMoney = 0;
    (*this).EconomyStatistic.EarnedLoot = {};
    (*this).EconomyStatistic.SoldLoot = {};
    (*this).EconomyStatistic.LostMoneyAfterWarehouse = 0;
    (*this).EconomyStatistic.LostLootAfterWarehouse = {};
    (*this).BossStatistic.GatheredBossPoints = 0.000000000e+00f;
    (*this).BossStatistic.BossLevel = 0;
    (*this).TurfWarStatistic.SuccessfulTurfWarAttacks = {};
    (*this).TurfWarStatistic.FailedTurfWarAttacks = {};
    (*this).TurfWarStatistic.SuccessfulTurfWarDefense = {};
    (*this).TurfWarStatistic.FailedTurfWarDefenses = {};
    (*this).TurfWarStatistic.TurfsCaptured = {};
    (*this).TurfWarStatistic.TurfsAcquiredAsIsolated = {};
    (*this).TurfWarStatistic.TurfsLost = {};
    (*this).TurfWarStatistic.RecruitedTurfWarSoldiers = 0;
    (*this).TurfWarStatistic.LostTurfWarSoldiers = 0;
    (*this).TurfWarStatistic.DetectivesNeutralized = 0;
    (*this).TurfWarStatistic.BossesEliminated = {};
    (*this).AssetsStatistic.AssetsEarned = {};
    (*this).AssetsStatistic.AssetsBought = {};
    (*this).AssetsStatistic.AssetsLost = {};
    (*this).AssetsStatistic.TotalAssets = {};
}
