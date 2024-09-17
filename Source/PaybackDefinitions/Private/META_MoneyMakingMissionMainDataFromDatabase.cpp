#include "META_MoneyMakingMissionMainDataFromDatabase.h"

FMETA_MoneyMakingMissionMainDataFromDatabase::FMETA_MoneyMakingMissionMainDataFromDatabase() {
    (*this).ID = nullptr;
    (*this).UnlockTag = FGameplayTag();
    (*this).UnlockRespectLvl = EMETA_RespectLvl::Low;
}
