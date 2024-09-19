#include "META_StoryMissionSave.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_ObjectiveReward.h"
#include "EMETA_RespectLvl.h"

FMETA_StoryMissionSave::FMETA_StoryMissionSave() {
    (*this).PrimaryEnemyVariationOverride = EIGS_GangsterVariationType::US_None;
    (*this).GangsterTier = EIGS_AITiers::AT_Unknown;
    (*this).PrimarySwatVariationOverride = EIGS_SWATVariationType::US_None;
    (*this).SWATTier = EIGS_AITiers::AT_Unknown;
    (*this).IntelData.AmountOfSoldeirsWereSentToIntel = 0;
    (*this).IntelData.RequiredSoldiersForFullRevealIntel = 0;
    (*this).IntelData.RespectValueOnMissionSpawn = EMETA_RespectLvl::Low;
    (*this).IntelData.IntelRewardMultiplier = 1.000000000e+00f;
    (*this).Type = EMETA_JobType::FPSMission;
    (*this).Parameters = TMap<FGameplayTag, int32>{};
    (*this).MissionExpenses = 0;
    (*this).HeistersCut = 0;
    (*this).FencingExpenses = 0;
    (*this).MissionOutcome = 0;
    (*this).BonusLoot = TMap<FGameplayTag, int32>{};
    (*this).BonusCash = 0;
    (*this).ObjectiveMonetaryValue = 0;
    (*this).MaxMonetaryValue = 0;
    (*this).MonetaryValueMultiplier = 1.000000000e+00f;
    (*this).Reward1stStar = 0;
    (*this).Reward2ndStar = 0;
    (*this).Reward3rdStar = 0;
    (*this).LootMonetaryValue = 0;
    (*this).ObjectiveID = FGameplayTag();
    (*this).ObjectiveState = EMETA_ObjectiveState::InProgress;
    (*this).ObjectiveRewardData.RewardType = EMETA_ObjectiveReward::None;
    (*this).ObjectiveRewardData.Cash = 0;
    (*this).ObjectiveRewardData.LootItem = FGameplayTag();
    (*this).ObjectiveRewardData.LootMonetaryValue = 0;
    (*this).ObjectiveRewardData.WeaponQuality = EMETA_ItemQuality::None;
    (*this).ObjectiveRewardData.WeaponID = nullptr;
    (*this).ObjectiveRewardData.SoldiersAmount = 0;
    (*this).Difficulty = EIGS_ScenarioDifficulty::SD_Unknown;
    (*this).UserDifficulty = EIGS_UserDifficulty::UD_Unknown;
    (*this).SelectedLoot = FGameplayTag();
    (*this).WantedStars = 0;
    (*this).TurfActionAfterSuccess = EMETA_TurfActionAfterSuccess::None;
    (*this).WeaknessStrength = EMETA_AIBossStrengthChangeIntensity::None;
}
