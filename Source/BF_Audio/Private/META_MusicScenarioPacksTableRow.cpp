#include "META_MusicScenarioPacksTableRow.h"

FMETA_MusicScenarioPacksTableRow::FMETA_MusicScenarioPacksTableRow() {
    (*this).ID = FGameplayTag();
    (*this).ScenarioID = FGameplayTag();
    (*this).MusicCollectionID = FGameplayTag::RequestGameplayTag(TEXT("Music.Collection"));
}
