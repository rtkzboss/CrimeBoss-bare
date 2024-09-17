#include "IGS_ChainCharacter.h"

FIGS_ChainCharacter::FIGS_ChainCharacter() {
    (*this).CharacterTagID = FGameplayTag();
    (*this).CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).CharacterLoadout = nullptr;
    (*this).bOverrideState = false;
    (*this).OverrideState = EMETA_CharacterState::None;
}
