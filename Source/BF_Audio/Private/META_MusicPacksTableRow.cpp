#include "META_MusicPacksTableRow.h"

FMETA_MusicPacksTableRow::FMETA_MusicPacksTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Music.Collection");
    (*this).MusicPacks = {};
}
