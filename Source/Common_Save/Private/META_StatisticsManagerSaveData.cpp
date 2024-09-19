#include "META_StatisticsManagerSaveData.h"

FMETA_StatisticsManagerSaveData::FMETA_StatisticsManagerSaveData() {
    (*this).Statistic = TMap<int32, FMETA_StatisticNoteSaveData>{};
}
