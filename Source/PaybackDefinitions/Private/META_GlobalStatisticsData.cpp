#include "META_GlobalStatisticsData.h"

FMETA_GlobalStatisticsData::FMETA_GlobalStatisticsData() {
    (*this).Singleplayer = TMap<FGameplayTag, float>{};
}
