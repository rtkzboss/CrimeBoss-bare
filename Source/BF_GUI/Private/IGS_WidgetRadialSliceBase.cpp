#include "IGS_WidgetRadialSliceBase.h"

UIGS_WidgetRadialSliceBase::UIGS_WidgetRadialSliceBase() {
    (*this).NormalColor = FLinearColor(5.000000000e-01f, 5.000000000e-01f, 5.000000000e-01f, 1.000000000e+00f);
    (*this).HoverColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
}

void UIGS_WidgetRadialSliceBase::SliceUnhover_Implementation() {
}

void UIGS_WidgetRadialSliceBase::SliceHover_Implementation() {
}

bool UIGS_WidgetRadialSliceBase::SliceClicked_Implementation() {
    return false;
}


