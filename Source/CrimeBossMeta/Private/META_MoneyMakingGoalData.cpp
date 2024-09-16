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
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).LootType, 0)) = NAME_None;
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionTypeTags, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionTypeTags, 0)) = {};
    (*this).EnemyGangIDs = 0;
    (*this).Purpose = EMETA_GoalPurpose::INVALID;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
}
