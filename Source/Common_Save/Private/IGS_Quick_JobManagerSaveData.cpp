#include "IGS_Quick_JobManagerSaveData.h"
#include "META_AmbushMissionSave.h"
#include "META_BaseMissionSave.h"
#include "META_MoneyMakingMissionSave.h"
#include "META_StoryMissionSave.h"
#include "META_TradeDealSellMissionSave.h"
#include "META_TradeMissionSave.h"
#include "META_TurfWarMissionSave.h"
#include "Templates/SubclassOf.h"

FIGS_Quick_JobManagerSaveData::FIGS_Quick_JobManagerSaveData() {
    (*this).CurrentJob = nullptr;
    (*this).Opportunities.MoneyMakingMissions = TArray<FMETA_MoneyMakingMissionSave>{};
    (*this).Opportunities.AmbushMissions = TArray<FMETA_AmbushMissionSave>{};
    (*this).Opportunities.StoryMissions = TArray<FMETA_StoryMissionSave>{};
    (*this).Opportunities.TradeMissions = TArray<FMETA_TradeMissionSave>{};
    (*this).Opportunities.TradeDealSellMissions = TArray<FMETA_TradeDealSellMissionSave>{};
    (*this).Opportunities.CinematicMissions = TArray<FMETA_BaseMissionSave>{};
    (*this).Opportunities.TurfWarMissions = TArray<FMETA_TurfWarMissionSave>{};
    (*this).Opportunities.OtherMissions = TArray<TSubclassOf<UMETA_MissionID>>{};
    (*this).LastSelectedDifficulties = TMap<EIGS_QPModeSource, EIGS_UserDifficulty>{};
    (*this).LastPlayedMission.MoneyMakingMissions = TArray<FMETA_MoneyMakingMissionSave>{};
    (*this).LastPlayedMission.AmbushMissions = TArray<FMETA_AmbushMissionSave>{};
    (*this).LastPlayedMission.StoryMissions = TArray<FMETA_StoryMissionSave>{};
    (*this).LastPlayedMission.TradeMissions = TArray<FMETA_TradeMissionSave>{};
    (*this).LastPlayedMission.TradeDealSellMissions = TArray<FMETA_TradeDealSellMissionSave>{};
    (*this).LastPlayedMission.CinematicMissions = TArray<FMETA_BaseMissionSave>{};
    (*this).LastPlayedMission.TurfWarMissions = TArray<FMETA_TurfWarMissionSave>{};
    (*this).LastPlayedMission.OtherMissions = TArray<TSubclassOf<UMETA_MissionID>>{};
    (*this).FinishedMissionsIDs = TArray<FGuid>{};
    (*this).bLastPlayedWasChain = false;
}
