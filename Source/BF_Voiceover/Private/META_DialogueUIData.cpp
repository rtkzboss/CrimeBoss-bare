#include "META_DialogueUIData.h"

FMETA_DialogueUIData::FMETA_DialogueUIData() {
    (*this).ID = FText::GetEmpty();
    (*this).Characters = TMap<EIGS_MetaDialogueCharacterSlot, EIGS_MetaDialogueCharacter>{};
    (*this).screenTag = FGameplayTag();
    (*this).TypeTag = FGameplayTag();
}
