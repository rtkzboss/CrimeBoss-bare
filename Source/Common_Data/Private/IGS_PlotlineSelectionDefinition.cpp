#include "IGS_PlotlineSelectionDefinition.h"

FIGS_PlotlineSelectionDefinition::FIGS_PlotlineSelectionDefinition() {
    (*this).itemTag = FGameplayTag();
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).BackgroundImage = FSoftObjectPath();
    (*this).UnlockCriteriaTag = FGameplayTag();
    (*this).EntitlementTag = FGameplayTag();
    (*this).LockedMessage = FText::GetEmpty();
    (*this).StarItems = TArray<FIGS_PlotlineSelectionStarItem>{};
    (*this).IsPlotline = false;
    (*this).IsDebugOnly = false;
    (*this).TileSize = EIGS_MenuTileSize::FullSize;
}
