#include "IGS_MenuTileData_PlotlineSelector.h"

UIGS_MenuTileData_PlotlineSelector::UIGS_MenuTileData_PlotlineSelector() {
    (*this).IsUnlocked = true;
}

void UIGS_MenuTileData_PlotlineSelector::SetIsUnlocked(const bool inUnlocked) {
}

void UIGS_MenuTileData_PlotlineSelector::SetData(const FIGS_PlotlineSelectionDefinition& inData) {
}

FGameplayTag UIGS_MenuTileData_PlotlineSelector::GetUnlockCriteriaTag() const {
    return FGameplayTag();
}

FText UIGS_MenuTileData_PlotlineSelector::GetLockedMessage() {
    return FText::GetEmpty();
}

bool UIGS_MenuTileData_PlotlineSelector::GetIsUnlocked() const {
    return false;
}

bool UIGS_MenuTileData_PlotlineSelector::GetIsPlotline() const {
    return false;
}

FIGS_PlotlineSelectionDefinition UIGS_MenuTileData_PlotlineSelector::GetData() {
    return FIGS_PlotlineSelectionDefinition{};
}

