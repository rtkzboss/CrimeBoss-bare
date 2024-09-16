#include "META_CharacterClassConfig.h"

FMETA_CharacterClassConfig::FMETA_CharacterClassConfig() {
    (*this).CharacterClass = nullptr;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ClassPerk, 0)) = NAME_None;
}
