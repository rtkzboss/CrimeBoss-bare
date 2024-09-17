#include "IGS_PlotlineSelectionStarItem.h"

FIGS_PlotlineSelectionStarItem::FIGS_PlotlineSelectionStarItem() {
    (*this).UnlockCriteriaTag = FGameplayTag();
    (*this).Description = FText::GetEmpty();
}
