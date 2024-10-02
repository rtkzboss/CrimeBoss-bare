#include "IGS_MultiplayerHubDataRow.h"

FIGS_MultiplayerHubDataRow::FIGS_MultiplayerHubDataRow() {
    (*this).ButtonImage = FSoftObjectPath();
    (*this).ButtonName = FText::GetEmpty();
    (*this).ButtonDescription = FText::GetEmpty();
    (*this).SelectionLabelDefaultText = FText::GetEmpty();
    (*this).SelectionLabelDisabledText = FText::GetEmpty();
    (*this).IsTimeLimited = false;
}
