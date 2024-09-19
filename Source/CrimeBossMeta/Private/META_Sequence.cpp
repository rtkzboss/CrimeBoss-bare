#include "META_Sequence.h"

FMETA_Sequence::FMETA_Sequence() {
    (*this).Tag = FGameplayTag();
    (*this).Items = TArray<FMETA_SequenceItem>{};
    (*this).Priority = EMETA_SequencePriority::Normal;
}
