#include "META_TradeDealSellMissionRowInfo.h"

FMETA_TradeDealSellMissionRowInfo::FMETA_TradeDealSellMissionRowInfo() {
    (*this).CutsceneID = FText::GetEmpty();
    (*this).DebugText = FText::GetEmpty();
    (*this).Picture = FSoftObjectPath();
    (*this).MapIconOverride = FSoftObjectPath();
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).DaysOnMap = -1;
    (*this).MinCrewSize = 1;
    (*this).MaxCrewSize = 4;
    (*this).CharactersRequired = TArray<EIGS_CharacterID>{};
    (*this).CharactersRequiredButNotOwned = TArray<EIGS_CharacterID>{};
    (*this).ResultsWhenJobIsNotRemovedFromTheMap = TArray<EMETA_JobResult>{};
    (*this).Vendor = EMETA_TradeVendor::UNDEFINED;
}
