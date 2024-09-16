#include "IGS_ChainMissionEntry.h"

FIGS_ChainMissionEntry::FIGS_ChainMissionEntry() {
    (*this).bShowAdvancedProperties = false;
    (*this).BriefingCutscene = FText::GetEmpty();
    (*this).BriefingMovie = nullptr;
    (*this).DebugMissionTitle = TEXT("- Unknown - ");
    (*this).MissionID = nullptr;
    (*this).EnableForDifficulty = 14;
    (*this).DebriefCutscene = FText::GetEmpty();
    (*this).DebriefMovie = nullptr;
    (*this).FailCutscene = FText::GetEmpty();
    (*this).FailMovie = nullptr;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).LobbyMenuVOType, 0)) = NAME_None;
}
