#include "IGS_Quick_JobManagerSaveData.h"

FIGS_Quick_JobManagerSaveData::FIGS_Quick_JobManagerSaveData() {
    (*this).CurrentJob = nullptr;
    (*this).Opportunities.MoneyMakingMissions = {};
    (*this).Opportunities.AmbushMissions = {};
    (*this).Opportunities.StoryMissions = {};
    (*this).Opportunities.TradeMissions = {};
    (*this).Opportunities.TradeDealSellMissions = {};
    (*this).Opportunities.CinematicMissions = {};
    (*this).Opportunities.TurfWarMissions = {};
    (*this).Opportunities.OtherMissions = {};
    (*this).LastSelectedDifficulties = {};
    (*this).LastPlayedMission.MoneyMakingMissions = {};
    (*this).LastPlayedMission.AmbushMissions = {};
    (*this).LastPlayedMission.StoryMissions = {};
    (*this).LastPlayedMission.TradeMissions = {};
    (*this).LastPlayedMission.TradeDealSellMissions = {};
    (*this).LastPlayedMission.CinematicMissions = {};
    (*this).LastPlayedMission.TurfWarMissions = {};
    (*this).LastPlayedMission.OtherMissions = {};
    (*this).FinishedMissionsIDs = {};
    (*this).bLastPlayedWasChain = false;
}
