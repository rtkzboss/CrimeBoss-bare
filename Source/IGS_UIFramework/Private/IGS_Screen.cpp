#include "IGS_Screen.h"

UIGS_Screen::UIGS_Screen() {
    (*this).ScreenInputMode = EScreenInputMode::UIOnly;
    (*this).InputDelay = 3.000000119e-01f;
    (*this).RefreshFocusAfterClose = true;
    (*this).CallOnOpenAfterClosePreviousScreen = true;
}

void UIGS_Screen::RefreshFocus_Implementation() {
}







bool UIGS_Screen::IsThisScreenOnTop() const {
    return false;
}

bool UIGS_Screen::GoBack_Implementation() {
    return false;
}

FText UIGS_Screen::GetTitleOverride_Implementation() const {
    return FText::GetEmpty();
}

void UIGS_Screen::Close() {
}

void UIGS_Screen::AddScreenToViewport() {
}

