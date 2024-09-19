#include "IGS_WidgetGridContainerSlot.h"

UIGS_WidgetGridContainerSlot::UIGS_WidgetGridContainerSlot() : Super(FObjectInitializer::Get()) {
    (*this).NormalColor = FLinearColor(5.000000000e-01f, 5.000000000e-01f, 5.000000000e-01f, 1.000000000e+00f);
    (*this).NormalOccupiedColor = FLinearColor(5.000000000e-01f, 5.000000000e-01f, 5.000000000e-01f, 1.000000000e+00f);
    (*this).HoverColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).HoverOccupiedColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).DropOkColor = FLinearColor(0.000000000e+00f, 1.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f);
    (*this).DropErrorColor = FLinearColor(8.962693214e-01f, 3.324515224e-01f, 6.048833020e-03f, 1.000000000e+00f);
    (*this).ContainerSlotRow = -1;
    (*this).ContainerSlotColumn = -1;
    (*this).ContainerSlotId = -1;
    (*this).ItemRootSlotId = -1;
}

void UIGS_WidgetGridContainerSlot::SetIsOccupied(bool inOccupied) {
}

bool UIGS_WidgetGridContainerSlot::GetIsOccupied() const {
    return false;
}

