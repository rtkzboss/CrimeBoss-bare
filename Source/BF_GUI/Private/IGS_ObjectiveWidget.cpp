#include "IGS_ObjectiveWidget.h"

UIGS_ObjectiveWidget::UIGS_ObjectiveWidget() {
    (*this).bShouldPlayWidgetAnimations = true;
    (*this).ID = -1;
}

void UIGS_ObjectiveWidget::OnTaskAdded(int32 inID, int32 inObjectiveID) {
}



void UIGS_ObjectiveWidget::OnObjectiveStateChanged(int32 inID) {
}



