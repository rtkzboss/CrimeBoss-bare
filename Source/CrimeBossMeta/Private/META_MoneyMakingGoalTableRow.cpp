#include "META_MoneyMakingGoalTableRow.h"

FMETA_MoneyMakingGoalTableRow::FMETA_MoneyMakingGoalTableRow() {
    (*this).Title = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Icon = FSoftObjectPath();
    (*this).Picture = FSoftObjectPath();
    (*this).UseLockRespectCondition = false;
    (*this).UnlockRespect = EMETA_RespectLvl::Low;
    (*this).LockRespect = EMETA_RespectLvl::Low;
    (*this).InstigatorPartner = EMETA_Partner::Secretary;
    (*this).TaskTitle = FText::GetEmpty();
    (*this).LootType = FGameplayTag();
    (*this).MonetaryValue.Min = 0;
    (*this).MonetaryValue.Max = 0;
    (*this).MissionTypeTags = FGameplayTagContainer();
    (*this).EnemyGangIDs = 0;
    (*this).EntitlementTag = FGameplayTag();
}
