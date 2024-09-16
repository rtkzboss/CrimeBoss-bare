#include "META_PlanningBoardManagerSaveData.h"

FMETA_PlanningBoardManagerSaveData::FMETA_PlanningBoardManagerSaveData() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ActivePlanningBoardTag, 0)) = NAME_None;
    (*this).PlanningBoardItemsStatuses = {};
}
