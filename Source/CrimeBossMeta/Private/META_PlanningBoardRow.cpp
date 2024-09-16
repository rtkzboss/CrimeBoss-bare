#include "META_PlanningBoardRow.h"

FMETA_PlanningBoardRow::FMETA_PlanningBoardRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
    (*this).Name = FText::GetEmpty();
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).voiceoverTag, 0)) = NAME_None;
    (*this).ItemsTable = nullptr;
}
