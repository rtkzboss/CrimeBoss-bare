#include "META_GoalTableRow.h"
#include "GameplayTagContainer.h"
#include "EMETA_Partner.h"
#include "EMETA_RespectLvl.h"

FMETA_GoalTableRow::FMETA_GoalTableRow() {
    (*this).ID = nullptr;
    (*this).GoalType = EMETA_GoalType::INVALID;
    (*this).GoalPurpose = EMETA_GoalPurpose::INVALID;
    (*this).Priority = EMETA_GoalPriority::Medium;
    (*this).StoryGoal.Graph = FSoftObjectPath();
    (*this).StoryGoal.Title = FText::GetEmpty();
    (*this).StoryGoal.Description = FText::GetEmpty();
    (*this).StoryGoal.Icon = FSoftObjectPath();
    (*this).StoryGoal.Picture = FSoftObjectPath();
    (*this).StoryGoal.bIsGoalRepeatable = false;
    (*this).StoryGoal.DaysBetweenAttempts = 1;
    (*this).StoryGoal.Missions = {};
    (*this).StoryGoal.ActionCardsGoal = {};
    (*this).StoryGoal.RespectByDefault = 0;
    (*this).StoryGoal.UseLockRespectCondition = false;
    (*this).StoryGoal.UnlockRespect = EMETA_RespectLvl::Low;
    (*this).StoryGoal.LockRespect = EMETA_RespectLvl::Low;
    (*this).StoryGoal.InstigatorPartner = EMETA_Partner::Secretary;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).StoryGoal.EntitlementTag, 0)) = NAME_None;
    (*this).MoneyMakingGoal.Title = FText::GetEmpty();
    (*this).MoneyMakingGoal.Description = FText::GetEmpty();
    (*this).MoneyMakingGoal.Icon = FSoftObjectPath();
    (*this).MoneyMakingGoal.Picture = FSoftObjectPath();
    (*this).MoneyMakingGoal.UseLockRespectCondition = false;
    (*this).MoneyMakingGoal.UnlockRespect = EMETA_RespectLvl::Low;
    (*this).MoneyMakingGoal.LockRespect = EMETA_RespectLvl::Low;
    (*this).MoneyMakingGoal.InstigatorPartner = EMETA_Partner::Secretary;
    (*this).MoneyMakingGoal.TaskTitle = FText::GetEmpty();
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).MoneyMakingGoal.LootType, 0)) = NAME_None;
    (*this).MoneyMakingGoal.MonetaryValue.Min = 0;
    (*this).MoneyMakingGoal.MonetaryValue.Max = 0;
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MoneyMakingGoal.MissionTypeTags, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MoneyMakingGoal.MissionTypeTags, 0)) = {};
    (*this).MoneyMakingGoal.EnemyGangIDs = 0;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).MoneyMakingGoal.EntitlementTag, 0)) = NAME_None;
}
