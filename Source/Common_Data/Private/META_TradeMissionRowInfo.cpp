#include "META_TradeMissionRowInfo.h"

FMETA_TradeMissionRowInfo::FMETA_TradeMissionRowInfo() {
    (*this).CutsceneID = FText::GetEmpty();
    (*this).DebugText = FText::GetEmpty();
    (*this).Picture = FSoftObjectPath();
    (*this).MapIconOverride = FSoftObjectPath();
    (*this).ExpensesMap = {};
    (*this).Expenses = {};
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).DaysOnMap = -1;
    (*this).MinCrewSize = 1;
    (*this).MaxCrewSize = 4;
    (*this).CharactersRequired = {};
    (*this).CharactersRequiredButNotOwned = {};
    (*this).ResultsWhenJobIsNotRemovedFromTheMap = {};
    (*this).DistrictType = EIGS_HubDistrict::Downtown;
    (*this).BackdropType = EIGS_HubBackdropTypes::AllRandom;
}
