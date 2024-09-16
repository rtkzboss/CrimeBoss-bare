#include "IGS_ActiveChainData.h"

FIGS_ActiveChainData::FIGS_ActiveChainData() {
    (*this).ChainType = EIGS_ChainType::UrbanLegend;
    (*this).Difficulty = EIGS_ChainDifficulty::Unknown;
    (*this).ActiveChainInfo.ActiveMissionIndex = 0;
    (*this).ActiveChainInfo.ActiveChainContractID = nullptr;
    (*this).ActiveChainMissionSteps = {};
    (*this).ActiveChainMissions = {};
    (*this).CurrentMission = nullptr;
    (*this).ActiveChainResults.MissionName = FText::GetEmpty();
    (*this).ActiveChainResults.ChainContractID = nullptr;
    (*this).ActiveChainResults.StarRating = 0;
    (*this).ActiveChainResults.Score = 0;
    (*this).ActiveChainResults.MoneyRewardTotal = 0;
    (*this).ActiveChainResults.RespectRewardAfterLastMission = 0;
    (*this).ActiveChainResults.WeaponsReward = {};
    (*this).ActiveChainResults.WeaponTagsReward = {};
    (*this).ActiveChainResults.QuickMissionResults = {};
    (*this).ActiveChainResults.PlayerHeisters = {};
    (*this).ActiveChainResults.RemainingHeisters = {};
    (*this).ActiveChainResults.Completed = false;
    (*this).ChainCrew = {};
    (*this).ChainCrewInfo = {};
    (*this).MissionData = {};
    (*this).ChainMoney = 0;
}
