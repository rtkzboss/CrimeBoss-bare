#include "IGS_HordeMode_PerkRow.h"
#include "UObject/NoExportTypes.h"

FIGS_HordeMode_PerkRow::FIGS_HordeMode_PerkRow() {
    (*this).UpgradePerk = nullptr;
    (*this).DisplayName = FText::GetEmpty();
    (*this).PickupText = FText::GetEmpty();
    (*this).PerkStaticMesh = nullptr;
    (*this).PerkOnScreenEffect = nullptr;
    (*this).PickupSound = nullptr;
    (*this).IconGlyph = FText::GetEmpty();
    (*this).IconColor = FSlateColor(FLinearColor(1.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f));
    (*this).GenerateInRewardStation = true;
}
