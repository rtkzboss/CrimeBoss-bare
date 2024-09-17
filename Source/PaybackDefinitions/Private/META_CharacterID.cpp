#include "META_CharacterID.h"

FMETA_CharacterID::FMETA_CharacterID() {
    (*this).TagID = FGameplayTag();
    (*this).ID = EIGS_CharacterID::Char_Unknown;
    (*this).UniqGenericId = -1;
}
