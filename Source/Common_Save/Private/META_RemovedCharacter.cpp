#include "META_RemovedCharacter.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"

FMETA_RemovedCharacter::FMETA_RemovedCharacter() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID.TagID, 0)) = NAME_None;
    (*this).ID.ID = EIGS_CharacterID::Char_Unknown;
    (*this).ID.UniqGenericId = -1;
}
