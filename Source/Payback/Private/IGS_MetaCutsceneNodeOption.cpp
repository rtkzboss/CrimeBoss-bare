#include "IGS_MetaCutsceneNodeOption.h"

FIGS_MetaCutsceneNodeOption::FIGS_MetaCutsceneNodeOption() {
    (*this).Text = FText::GetEmpty();
    (*this).Action = EIGS_MetaCutsceneNodeAction::ResultA;
    (*this).NodeName = NAME_None;
    (*this).ResultTag = FGameplayTag();
    (*this).HasFullSequence = false;
    (*this).FullSequence = NAME_None;
    (*this).EndDialogueID = FText::GetEmpty();
    (*this).ChoiceSelectionSound = nullptr;
    (*this).ChoiceVisibility = EIGS_CutsceneChoiceVisibility::Visible;
    (*this).ChoiceVisibilityConditionFail = EIGS_CutsceneChoiceVisibility::Disabled;
    (*this).ChoiceVisibilityConditions = {};
    (*this).ValueTag = FGameplayTag();
    (*this).PriceValue = 0.000000000e+00f;
    (*this).VisibilityValue = EIGS_CutsceneChoiceVisibility::Visible;
}
