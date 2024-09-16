#include "IGS_Quick_ChainResult.h"

FIGS_Quick_ChainResult::FIGS_Quick_ChainResult() {
    (*this).MissionName = FText::GetEmpty();
    (*this).ChainContractID = nullptr;
    (*this).StarRating = 0;
    (*this).Score = 0;
    (*this).MoneyRewardTotal = 0;
    (*this).RespectRewardAfterLastMission = 0;
    (*this).WeaponsReward = {};
    (*this).WeaponTagsReward = {};
    (*this).QuickMissionResults = {};
    (*this).PlayerHeisters = {};
    (*this).RemainingHeisters = {};
    (*this).Completed = false;
}
