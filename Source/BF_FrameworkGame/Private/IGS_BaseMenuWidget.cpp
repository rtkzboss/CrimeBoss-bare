#include "IGS_BaseMenuWidget.h"

UIGS_BaseMenuWidget::UIGS_BaseMenuWidget() {
    (*this).OpenScreenDelayAfterInitialization = 5.000000000e-01f;
}

void UIGS_BaseMenuWidget::SwitchToScreen(FGameplayTag inScreenTag) {
}


void UIGS_BaseMenuWidget::SetForceHidden(bool IsHidden) {
}



void UIGS_BaseMenuWidget::OpenScreenOnInitialization() {
}



void UIGS_BaseMenuWidget::OnScreenOpen_Internal(FGameplayTag inScreenTag) {
}


bool UIGS_BaseMenuWidget::IsTopContentVisible() const {
    return false;
}

bool UIGS_BaseMenuWidget::IsBottomContentVisible() const {
    return false;
}

bool UIGS_BaseMenuWidget::IsBaseScreenVisible() const {
    return false;
}

UIGS_Screen* UIGS_BaseMenuWidget::GetScreenToBeOpenOnInitialization_Implementation() {
    return nullptr;
}

