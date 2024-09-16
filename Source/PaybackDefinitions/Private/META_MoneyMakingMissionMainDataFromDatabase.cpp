#include "META_MoneyMakingMissionMainDataFromDatabase.h"

FMETA_MoneyMakingMissionMainDataFromDatabase::FMETA_MoneyMakingMissionMainDataFromDatabase() {
    (*this).ID = nullptr;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).UnlockTag, 0)) = NAME_None;
    (*this).UnlockRespectLvl = EMETA_RespectLvl::Low;
}
