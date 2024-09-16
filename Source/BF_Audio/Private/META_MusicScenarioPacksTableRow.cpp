#include "META_MusicScenarioPacksTableRow.h"

FMETA_MusicScenarioPacksTableRow::FMETA_MusicScenarioPacksTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ScenarioID, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).MusicCollectionID, 0)) = TEXT("Music.Collection");
}
