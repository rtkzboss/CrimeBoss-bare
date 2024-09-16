#include "META_MissionsStatistic.h"

FMETA_MissionsStatistic::FMETA_MissionsStatistic() {
    (*this).FinishedMissions = {};
    (*this).FinishedMissionsDependsFromStars = {};
    (*this).LostMissions = {};
    (*this).FinishedBigHeists = {};
    (*this).CountOftFinishedBigHeists = 0;
    (*this).CountOfLostBigHeists = 0;
    (*this).FinishedMissionWithoutKills = {};
    (*this).MissionWithStels = 0;
    (*this).FinishedMissionWithStels = 0;
    (*this).PlayedAmbushes = 0;
    (*this).SurvivedAmbushes = 0;
    (*this).PlayedWarehouseSiege = 0;
}
