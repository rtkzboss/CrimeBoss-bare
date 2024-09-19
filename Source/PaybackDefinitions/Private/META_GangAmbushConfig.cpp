#include "META_GangAmbushConfig.h"

FMETA_GangAmbushConfig::FMETA_GangAmbushConfig() {
    (*this).DefaultForGangAmbush = TMap<EMETA_Gang, FMETA_Chance>{};
    (*this).NoGangsterKilledInMission = -5;
    (*this).MissionWasDoneInStealth = -20;
    (*this).BossInTopEnemyList = 20;
    (*this).BossIsInGangsEnemyList = 20;
}
