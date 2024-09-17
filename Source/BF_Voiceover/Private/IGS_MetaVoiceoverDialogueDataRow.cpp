#include "IGS_MetaVoiceoverDialogueDataRow.h"
#include "GameplayTagContainer.h"

FIGS_MetaVoiceoverDialogueDataRow::FIGS_MetaVoiceoverDialogueDataRow() {
    (*this).DialogueData.ID = FText::GetEmpty();
    (*this).DialogueData.Characters = {};
    (*this).DialogueData.screenTag = FGameplayTag();
    (*this).DialogueData.TypeTag = FGameplayTag();
}
