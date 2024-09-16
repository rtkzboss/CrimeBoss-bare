#include "IGS_TaskWidgetBase.h"

UIGS_TaskWidgetBase::UIGS_TaskWidgetBase() {
    (*this).ID = -1;
    (*this).FontSize = 12;
}


void UIGS_TaskWidgetBase::OnTaskValuesChanged(int32 inID) {
}


void UIGS_TaskWidgetBase::OnTaskStateChanged(int32 inID, EIGS_ObjectiveState inState) {
}

