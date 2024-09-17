#include "META_MusicPacksTableRow.h"

FMETA_MusicPacksTableRow::FMETA_MusicPacksTableRow() {
    (*this).ID = FGameplayTag::RequestGameplayTag(TEXT("Music.Collection"));
    (*this).MusicPacks = {};
}
