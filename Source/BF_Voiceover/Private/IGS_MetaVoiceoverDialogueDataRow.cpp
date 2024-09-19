#include "IGS_MetaVoiceoverDialogueDataRow.h"
#include "GameplayTagContainer.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "EIGS_MetaDialogueCharacterSlot.h"

FIGS_MetaVoiceoverDialogueDataRow::FIGS_MetaVoiceoverDialogueDataRow() {
    (*this).DialogueData.ID = FText::GetEmpty();
    (*this).DialogueData.Characters = TMap<EIGS_MetaDialogueCharacterSlot, EIGS_MetaDialogueCharacter>{};
    (*this).DialogueData.screenTag = FGameplayTag();
    (*this).DialogueData.TypeTag = FGameplayTag();
}
