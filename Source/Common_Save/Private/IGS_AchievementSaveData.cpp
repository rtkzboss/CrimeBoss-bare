#include "IGS_AchievementSaveData.h"

FIGS_AchievementSaveData::FIGS_AchievementSaveData() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).CurrentValue = 0;
    (*this).UploadedValue = 0;
}
