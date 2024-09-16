#include "META_DialogueUIData.h"

FMETA_DialogueUIData::FMETA_DialogueUIData() {
    (*this).ID = FText::GetEmpty();
    (*this).Characters = {};
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).screenTag, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).TypeTag, 0)) = NAME_None;
}
