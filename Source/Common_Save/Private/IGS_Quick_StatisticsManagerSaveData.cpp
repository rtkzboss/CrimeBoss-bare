#include "IGS_Quick_StatisticsManagerSaveData.h"

FIGS_Quick_StatisticsManagerSaveData::FIGS_Quick_StatisticsManagerSaveData() {
    (*this).Statistic = TMap<int32, FMETA_StatisticNoteSaveData>{};
}
