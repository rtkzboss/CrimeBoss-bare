#include "META_DialogueUIData.h"

FMETA_DialogueUIData::FMETA_DialogueUIData() {
    (*this).ID = FText::GetEmpty();
    (*this).Characters = {};
    (*this).screenTag = FGameplayTag();
    (*this).TypeTag = FGameplayTag();
}
