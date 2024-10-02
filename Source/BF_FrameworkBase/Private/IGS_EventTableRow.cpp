#include "IGS_EventTableRow.h"

FIGS_EventTableRow::FIGS_EventTableRow() {
    (*this).ID = NAME_None;
    (*this).TypeTag = FGameplayTag();
    (*this).EventClass = FSoftObjectPath();
    (*this).VisibleFromDate.Day = 1;
    (*this).VisibleFromDate.Month = 1;
    (*this).VisibleFromDate.Year = 2024;
    (*this).VisibleFromDate.Hours = 1;
    (*this).VisibleFromDate.Minutes = 1;
    (*this).ActiveFromDate.Day = 1;
    (*this).ActiveFromDate.Month = 1;
    (*this).ActiveFromDate.Year = 2024;
    (*this).ActiveFromDate.Hours = 1;
    (*this).ActiveFromDate.Minutes = 1;
    (*this).EndsAtDate.Day = 1;
    (*this).EndsAtDate.Month = 1;
    (*this).EndsAtDate.Year = 2024;
    (*this).EndsAtDate.Hours = 1;
    (*this).EndsAtDate.Minutes = 1;
    (*this).DisplayName = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
    (*this).ShowPopup = false;
}
