#include "IGS_Quick_ActiveChainContractData.h"

FIGS_Quick_ActiveChainContractData::FIGS_Quick_ActiveChainContractData() {
    (*this).ActiveChainContract = nullptr;
    (*this).ActiveChainMissionSteps = {};
    (*this).ActiveChainMissions.MoneyMakingMissions = {};
    (*this).ActiveChainMissions.AmbushMissions = {};
    (*this).ActiveChainMissions.StoryMissions = {};
    (*this).ActiveChainMissions.TradeMissions = {};
    (*this).ActiveChainMissions.TradeDealSellMissions = {};
    (*this).ActiveChainMissions.CinematicMissions = {};
    (*this).ActiveChainMissions.TurfWarMissions = {};
    (*this).ActiveChainMissions.OtherMissions = {};
    (*this).ActiveMissionIndex = 0;
    (*this).CurrentChainResults = {};
    (*this).GenericCrewHeisters = {};
    (*this).UniqueCrewHeisters = {};
    (*this).MissionData = {};
    (*this).Difficulty = EIGS_ChainDifficulty::Unknown;
    (*this).ChainMoney = 0;
}
