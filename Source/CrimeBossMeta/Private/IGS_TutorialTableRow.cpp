#include "IGS_TutorialTableRow.h"

FIGS_TutorialTableRow::FIGS_TutorialTableRow() {
    (*this).ID = FGameplayTag();
    (*this).SlowDownGame = false;
    (*this).Pages = TArray<FIGS_TutorialPage>{};
}
