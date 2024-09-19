#include "IGS_JobsScreenCategoryDataRow.h"

FIGS_JobsScreenCategoryDataRow::FIGS_JobsScreenCategoryDataRow() {
    (*this).CategoryName = FText::GetEmpty();
    (*this).Columns = TArray<FIGS_JobsScreenCategoryColumn>{};
}
