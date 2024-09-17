#include "META_DetectiveTableRow.h"

FMETA_DetectiveTableRow::FMETA_DetectiveTableRow() {
    (*this).ID = nullptr;
    (*this).Name = FText::GetEmpty();
    (*this).UnlockTag = FGameplayTag();
}
