#include "META_ChangeStatusPlanningBoardEvent.h"

FMETA_ChangeStatusPlanningBoardEvent::FMETA_ChangeStatusPlanningBoardEvent() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).itemTag, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).voiceoverTag, 0)) = NAME_None;
    (*this).fromStatus = EMETA_PlanningBoardItemStatus::None;
    (*this).toStatus = EMETA_PlanningBoardItemStatus::None;
}
