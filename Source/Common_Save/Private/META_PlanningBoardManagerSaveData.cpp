#include "META_PlanningBoardManagerSaveData.h"

FMETA_PlanningBoardManagerSaveData::FMETA_PlanningBoardManagerSaveData() {
    (*this).ActivePlanningBoardTag = FGameplayTag();
    (*this).PlanningBoardItemsStatuses = {};
}
