#include "META_SequenceItem.h"

FMETA_SequenceItem::FMETA_SequenceItem() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Tag, 0)) = NAME_None;
    (*this).RequiredMenuState = EMETA_MenuState::MS_Default;
}
