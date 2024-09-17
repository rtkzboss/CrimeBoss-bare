#include "META_PlanningBoardRow.h"

FMETA_PlanningBoardRow::FMETA_PlanningBoardRow() {
    (*this).ID = FGameplayTag();
    (*this).EntitlementTag = FGameplayTag();
    (*this).Name = FText::GetEmpty();
    (*this).voiceoverTag = FGameplayTag();
    (*this).ItemsTable = nullptr;
}
