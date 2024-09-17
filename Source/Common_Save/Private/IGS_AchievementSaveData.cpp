#include "IGS_AchievementSaveData.h"

FIGS_AchievementSaveData::FIGS_AchievementSaveData() {
    (*this).ID = FGameplayTag();
    (*this).CurrentValue = 0;
    (*this).UploadedValue = 0;
}
