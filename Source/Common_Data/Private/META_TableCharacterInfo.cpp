#include "META_TableCharacterInfo.h"

FMETA_TableCharacterInfo::FMETA_TableCharacterInfo() {
    (*this).CharacterQuality = EMETA_ItemQuality::MinGenerate;
    (*this).PerkTags = {};
    (*this).Perks = {};
}
