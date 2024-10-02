#include "IGS_HordeMode_UpgradeUI.h"
#include "UObject/NoExportTypes.h"

FIGS_HordeMode_UpgradeUI::FIGS_HordeMode_UpgradeUI() {
    (*this).Amount = 0.000000000e+00f;
    (*this).DisplayName = FText::GetEmpty();
    (*this).PickupText = FText::GetEmpty();
    (*this).IconGlyph = FText::GetEmpty();
    (*this).IconColor = FSlateColor(FLinearColor(1.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f));
}
