#include "META_Sequence.h"

FMETA_Sequence::FMETA_Sequence() {
    (*this).Tag = FGameplayTag();
    (*this).Items = {};
    (*this).Priority = EMETA_SequencePriority::Normal;
}
