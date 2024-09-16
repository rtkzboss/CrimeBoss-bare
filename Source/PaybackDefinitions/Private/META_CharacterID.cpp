#include "META_CharacterID.h"

FMETA_CharacterID::FMETA_CharacterID() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).ID = EIGS_CharacterID::Char_Unknown;
    (*this).UniqGenericId = -1;
}
