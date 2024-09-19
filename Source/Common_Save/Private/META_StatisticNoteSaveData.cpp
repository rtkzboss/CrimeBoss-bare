#include "META_StatisticNoteSaveData.h"
#include "GameplayTagContainer.h"
#include "EMETA_CareerCompletionReason.h"
#include "EMETA_CareerStatus.h"
#include "EMETA_Gang.h"
#include "META_AssetsDataForStatistic.h"
#include "META_BaseGoal.h"
#include "META_FinishedMissionInfo.h"
#include "META_HeisterStatisticData.h"
#include "Templates/SubclassOf.h"

class UMETA_BaseStoryGraphManager;
class UMETA_Weapon;

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
    (*this).CrewStatistic.HeistersStatisticData = TArray<FMETA_HeisterStatisticData>{};
    (*this).MissionsStatistic.FinishedMissions = TArray<FMETA_FinishedMissionInfo>{};
    (*this).MissionsStatistic.FinishedMissionsDependsFromStars = TMap<int32, int32>{};
    (*this).MissionsStatistic.LostMissions = TArray<FMETA_FinishedMissionInfo>{};
    (*this).MissionsStatistic.FinishedBigHeists = TArray<FMETA_FinishedMissionInfo>{};
    (*this).MissionsStatistic.CountOftFinishedBigHeists = 0;
    (*this).MissionsStatistic.CountOfLostBigHeists = 0;
    (*this).MissionsStatistic.FinishedMissionWithoutKills = TArray<FMETA_FinishedMissionInfo>{};
    (*this).MissionsStatistic.MissionWithStels = 0;
    (*this).MissionsStatistic.FinishedMissionWithStels = 0;
    (*this).MissionsStatistic.PlayedAmbushes = 0;
    (*this).MissionsStatistic.SurvivedAmbushes = 0;
    (*this).MissionsStatistic.PlayedWarehouseSiege = 0;
    (*this).GoalsStatistic.FinishedGoalsID = TArray<TSubclassOf<UMETA_BaseGoal>>{};
    (*this).GoalsStatistic.FailedGoalsID = TArray<TSubclassOf<UMETA_BaseGoal>>{};
    (*this).CampaignStatistic.DaysPlayed = 0;
    (*this).CampaignStatistic.CampaignStatus = EMETA_CareerStatus::None;
    (*this).CampaignStatistic.CareerCompletionReason = EMETA_CareerCompletionReason::NoTurfTiles;
    (*this).CampaignStatistic.ScoreForCampaign = 0;
    (*this).FPSStatistic.KilledGangsters = 0;
    (*this).FPSStatistic.KilledSecurityPersonnel = 0;
    (*this).FPSStatistic.KilledDetectives = 0;
    (*this).FPSStatistic.KilledCivilians = 0;
    (*this).StoryStatistic.PlotlinesFinished = TArray<TSoftObjectPtr<UMETA_BaseStoryGraphManager>>{};
    (*this).EconomyStatistic.BankruptcyCount = 0;
    (*this).EconomyStatistic.SuccessfullyFinishedTrades = 0;
    (*this).EconomyStatistic.WeaponsBought = TMap<UMETA_Weapon*, int32>{};
    (*this).EconomyStatistic.SpentMoney = 0;
    (*this).EconomyStatistic.EarnedMoney = 0;
    (*this).EconomyStatistic.EarnedLoot = TMap<FGameplayTag, int32>{};
    (*this).EconomyStatistic.SoldLoot = TMap<FGameplayTag, int32>{};
    (*this).EconomyStatistic.LostMoneyAfterWarehouse = 0;
    (*this).EconomyStatistic.LostLootAfterWarehouse = TMap<FGameplayTag, int32>{};
    (*this).BossStatistic.GatheredBossPoints = 0.000000000e+00f;
    (*this).BossStatistic.BossLevel = 0;
    (*this).TurfWarStatistic.SuccessfulTurfWarAttacks = TMap<EMETA_Gang, int32>{};
    (*this).TurfWarStatistic.FailedTurfWarAttacks = TMap<EMETA_Gang, int32>{};
    (*this).TurfWarStatistic.SuccessfulTurfWarDefense = TMap<EMETA_Gang, int32>{};
    (*this).TurfWarStatistic.FailedTurfWarDefenses = TMap<EMETA_Gang, int32>{};
    (*this).TurfWarStatistic.TurfsCaptured = TMap<EMETA_Gang, int32>{};
    (*this).TurfWarStatistic.TurfsAcquiredAsIsolated = TArray<FGameplayTag>{};
    (*this).TurfWarStatistic.TurfsLost = TMap<EMETA_Gang, int32>{};
    (*this).TurfWarStatistic.RecruitedTurfWarSoldiers = 0;
    (*this).TurfWarStatistic.LostTurfWarSoldiers = 0;
    (*this).TurfWarStatistic.DetectivesNeutralized = 0;
    (*this).TurfWarStatistic.BossesEliminated = TArray<EMETA_Gang>{};
    (*this).AssetsStatistic.AssetsEarned = TMap<FName, FMETA_AssetsDataForStatistic>{};
    (*this).AssetsStatistic.AssetsBought = TMap<FName, FMETA_AssetsDataForStatistic>{};
    (*this).AssetsStatistic.AssetsLost = TMap<FName, FMETA_AssetsDataForStatistic>{};
    (*this).AssetsStatistic.TotalAssets = TMap<FName, FMETA_AssetsDataForStatistic>{};
}
