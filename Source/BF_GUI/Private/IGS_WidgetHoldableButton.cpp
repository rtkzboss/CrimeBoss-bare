#include "IGS_WidgetHoldableButton.h"

UIGS_WidgetHoldableButton::UIGS_WidgetHoldableButton() {
    (*this).HoldTime = 1.000000000e+00f;
    (*this).HoldTicksPerSecond = 60;
}



void UIGS_WidgetHoldableButton::OnHoldStarted() {
}



void UIGS_WidgetHoldableButton::OnHoldCancelled() {
}

FEventReply UIGS_WidgetHoldableButton::OnHoldBorderMouseButtonUp(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent) {
    return FEventReply{};
}

FEventReply UIGS_WidgetHoldableButton::OnHoldBorderMouseButtonDown(FGeometry Geometry, const FPointerEvent& PointerEvent) {
    return FEventReply{};
}

void UIGS_WidgetHoldableButton::NativePreConstruct() {
}

void UIGS_WidgetHoldableButton::HandleHoldTick() {
}

void UIGS_WidgetHoldableButton::HandleHoldFinished() {
}

