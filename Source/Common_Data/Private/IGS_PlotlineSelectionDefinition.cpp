#include "IGS_PlotlineSelectionDefinition.h"

FIGS_PlotlineSelectionDefinition::FIGS_PlotlineSelectionDefinition() {
    (*this).itemTag = FGameplayTag();
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).BackgroundImage = FSoftObjectPath();
    (*this).UnlockCriteriaTag = FGameplayTag();
    (*this).EntitlementTag = FGameplayTag();
    (*this).LockedMessage = FText::GetEmpty();
    (*this).StarItems = {};
    (*this).IsPlotline = false;
    (*this).IsDebugOnly = false;
}
