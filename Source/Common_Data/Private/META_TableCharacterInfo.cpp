#include "META_TableCharacterInfo.h"
#include "Templates/SubclassOf.h"

FMETA_TableCharacterInfo::FMETA_TableCharacterInfo() {
    (*this).CharacterQuality = EMETA_ItemQuality::MinGenerate;
    (*this).PerkTags = TArray<FGameplayTag>{};
    (*this).Perks = TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>{};
}
