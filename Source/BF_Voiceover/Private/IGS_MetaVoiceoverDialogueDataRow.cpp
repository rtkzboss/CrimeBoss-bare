#include "IGS_MetaVoiceoverDialogueDataRow.h"
#include "GameplayTagContainer.h"

FIGS_MetaVoiceoverDialogueDataRow::FIGS_MetaVoiceoverDialogueDataRow() {
    (*this).DialogueData.ID = FText::GetEmpty();
    (*this).DialogueData.Characters = {};
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).DialogueData.screenTag, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).DialogueData.TypeTag, 0)) = NAME_None;
}
