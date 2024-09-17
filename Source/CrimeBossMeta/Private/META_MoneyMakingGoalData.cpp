#include "META_MoneyMakingGoalData.h"

FMETA_MoneyMakingGoalData::FMETA_MoneyMakingGoalData() {
    (*this).Title = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Icon = FSoftObjectPath();
    (*this).Picture = FSoftObjectPath();
    (*this).Result = EMETA_GoalStatus::None;
    (*this).Missions = {};
    (*this).AssignedTasks = {};
    (*this).InstigatorPartner = EMETA_Partner::Secretary;
    (*this).MonetaryValue = 0;
    (*this).LootType = FGameplayTag();
    (*this).MissionTypeTags = FGameplayTagContainer();
    (*this).EnemyGangIDs = 0;
    (*this).Purpose = EMETA_GoalPurpose::INVALID;
    (*this).EntitlementTag = FGameplayTag();
}
