#include "META_Sequence.h"

FMETA_Sequence::FMETA_Sequence() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Tag, 0)) = NAME_None;
    (*this).Items = {};
    (*this).Priority = EMETA_SequencePriority::Normal;
}
