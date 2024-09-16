#include "META_CinematicMissionRowInfo.h"

FMETA_CinematicMissionRowInfo::FMETA_CinematicMissionRowInfo() {
    (*this).CutsceneID = FText::GetEmpty();
    (*this).DebugText = FText::GetEmpty();
    (*this).Picture = FSoftObjectPath();
    (*this).MapIconOverride = FSoftObjectPath();
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).DaysOnMap = -1;
    (*this).MinCrewSize = 1;
    (*this).MaxCrewSize = 4;
    (*this).CharactersRequired = {};
    (*this).CharactersRequiredButNotOwned = {};
    (*this).ResultsWhenJobIsNotRemovedFromTheMap = {};
    (*this).DistrictType = EIGS_HubDistrict::INVALID;
    (*this).BackdropType = EIGS_HubBackdropTypes::AllRandom;
}
