#include "META_JobManagerSaveData.h"

FMETA_JobManagerSaveData::FMETA_JobManagerSaveData() {
    (*this).CurrentJob = nullptr;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).CurrentJobTileID, 0)) = NAME_None;
    (*this).JobsOnMap.MoneyMakingMissions = {};
    (*this).JobsOnMap.AmbushMissions = {};
    (*this).JobsOnMap.StoryMissions = {};
    (*this).JobsOnMap.TradeMissions = {};
    (*this).JobsOnMap.TradeDealSellMissions = {};
    (*this).JobsOnMap.CinematicMissions = {};
    (*this).JobsOnMap.TurfWarMissions = {};
    (*this).JobsOnMap.OtherMissions = {};
    (*this).JobParameters = {};
    (*this).JobsCompletedAmount = 0;
    (*this).JobsSpawnDay = {};
    (*this).bWasPlayerTransferredToFPSSide = false;
    (*this).FinishedMissions = {};
    (*this).bUsingTemporaryCrewAfterFPS = EMETA_UsingCrewInGraph::TemporaryCrew;
    (*this).RecentlyPlayedPresetsPerScenario = {};
    (*this).RecentlyPlayedJobData = {};
}
