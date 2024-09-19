#include "IGS_WidgetPingRadialSlice.h"

UIGS_WidgetPingRadialSlice::UIGS_WidgetPingRadialSlice() : Super(FObjectInitializer::Get()) {
    (*this).NormalColor = FLinearColor(5.000000000e-01f, 5.000000000e-01f, 5.000000000e-01f, 1.000000000e+00f);
    (*this).HoverColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).WieldedColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f);
    (*this).WieldedHoverColor = FLinearColor(8.962693214e-01f, 3.324515224e-01f, 6.048833020e-03f, 1.000000000e+00f);
    (*this).SlotBind = -1;
}

void UIGS_WidgetPingRadialSlice::SliceUnhover_Implementation() {
}

void UIGS_WidgetPingRadialSlice::SliceHover_Implementation() {
}

bool UIGS_WidgetPingRadialSlice::SliceClicked_Implementation() {
    return false;
}



