#include "META_ChangeStatusPlanningBoardEvent.h"

FMETA_ChangeStatusPlanningBoardEvent::FMETA_ChangeStatusPlanningBoardEvent() {
    (*this).itemTag = FGameplayTag();
    (*this).voiceoverTag = FGameplayTag();
    (*this).fromStatus = EMETA_PlanningBoardItemStatus::None;
    (*this).toStatus = EMETA_PlanningBoardItemStatus::None;
}
