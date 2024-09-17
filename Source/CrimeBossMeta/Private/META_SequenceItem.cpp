#include "META_SequenceItem.h"

FMETA_SequenceItem::FMETA_SequenceItem() {
    (*this).Tag = FGameplayTag();
    (*this).RequiredMenuState = EMETA_MenuState::MS_Default;
}
