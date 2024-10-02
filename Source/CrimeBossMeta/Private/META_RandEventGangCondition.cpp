#include "META_RandEventGangCondition.h"

FMETA_RandEventGangCondition::FMETA_RandEventGangCondition() {
    (*this).bAutomaticGangSelection = true;
    (*this).TargetGang = EMETA_Gang::None;
    (*this).ConsideringTimeInDays = 7;
    (*this).OccupiedTerritoriesOfOtherGang = -1;
    (*this).OccupiedTerritoriesOfPlayer = -1;
    (*this).LostOwnTerritoriesByOtherGang = -1;
    (*this).LostOwnTerritoriesByPlayer = -1;
}
