#include "META_StoryGoalTableRow.h"

FMETA_StoryGoalTableRow::FMETA_StoryGoalTableRow() {
    (*this).Graph = FSoftObjectPath();
    (*this).Title = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Icon = FSoftObjectPath();
    (*this).Picture = FSoftObjectPath();
    (*this).bIsGoalRepeatable = false;
    (*this).DaysBetweenAttempts = 1;
    (*this).Missions = {};
    (*this).ActionCardsGoal = {};
    (*this).RespectByDefault = 0;
    (*this).UseLockRespectCondition = false;
    (*this).UnlockRespect = EMETA_RespectLvl::Low;
    (*this).LockRespect = EMETA_RespectLvl::Low;
    (*this).InstigatorPartner = EMETA_Partner::Secretary;
    (*this).EntitlementTag = FGameplayTag();
}
