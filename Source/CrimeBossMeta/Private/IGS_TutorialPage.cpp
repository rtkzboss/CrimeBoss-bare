#include "IGS_TutorialPage.h"

FIGS_TutorialPage::FIGS_TutorialPage() {
    (*this).Title = FText::GetEmpty();
    (*this).Text = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
    (*this).Video = nullptr;
}
