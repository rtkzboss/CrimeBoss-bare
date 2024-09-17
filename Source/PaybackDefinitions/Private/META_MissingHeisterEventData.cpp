#include "META_MissingHeisterEventData.h"

FMETA_MissingHeisterEventData::FMETA_MissingHeisterEventData() {
    (*this).EventID = FGameplayTag();
    (*this).MissionID = nullptr;
    (*this).DaysLeftUntilEvent = 0;
}
