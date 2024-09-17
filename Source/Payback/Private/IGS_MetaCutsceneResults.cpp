#include "IGS_MetaCutsceneResults.h"

FIGS_MetaCutsceneResults::FIGS_MetaCutsceneResults() {
    (*this).DebugText = FText::GetEmpty();
    (*this).Result = 1;
    (*this).ResultTag = FGameplayTag();
    (*this).HideLevel = true;
}
