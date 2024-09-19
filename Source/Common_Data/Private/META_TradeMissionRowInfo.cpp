#include "META_TradeMissionRowInfo.h"

FMETA_TradeMissionRowInfo::FMETA_TradeMissionRowInfo() {
    (*this).CutsceneID = FText::GetEmpty();
    (*this).DebugText = FText::GetEmpty();
    (*this).Picture = FSoftObjectPath();
    (*this).MapIconOverride = FSoftObjectPath();
    (*this).ExpensesMap = TMap<FGameplayTag, FGameplayTag>{};
    (*this).Expenses = TArray<FMETA_TradeExpense>{};
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).DaysOnMap = -1;
    (*this).MinCrewSize = 1;
    (*this).MaxCrewSize = 4;
    (*this).CharactersRequired = TArray<EIGS_CharacterID>{};
    (*this).CharactersRequiredButNotOwned = TArray<EIGS_CharacterID>{};
    (*this).ResultsWhenJobIsNotRemovedFromTheMap = TArray<EMETA_JobResult>{};
    (*this).DistrictType = EIGS_HubDistrict::Downtown;
    (*this).BackdropType = EIGS_HubBackdropTypes::AllRandom;
}
