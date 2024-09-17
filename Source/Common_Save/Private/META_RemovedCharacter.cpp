#include "META_RemovedCharacter.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"

FMETA_RemovedCharacter::FMETA_RemovedCharacter() {
    (*this).ID.TagID = FGameplayTag();
    (*this).ID.ID = EIGS_CharacterID::Char_Unknown;
    (*this).ID.UniqGenericId = -1;
}
