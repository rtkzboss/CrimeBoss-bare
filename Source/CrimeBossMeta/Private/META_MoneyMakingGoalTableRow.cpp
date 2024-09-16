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
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).LootType, 0)) = NAME_None;
    (*this).MonetaryValue.Min = 0;
    (*this).MonetaryValue.Max = 0;
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionTypeTags, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionTypeTags, 0)) = {};
    (*this).EnemyGangIDs = 0;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
}
