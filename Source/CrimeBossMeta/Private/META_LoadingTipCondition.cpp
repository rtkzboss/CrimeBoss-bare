#include "META_LoadingTipCondition.h"

FMETA_LoadingTipCondition::FMETA_LoadingTipCondition() {
    auto gen = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Scenarios, 0)) = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Scenarios, 0)) = {};
    (*this).Conditions = {};
    (*this).Operator = EMETA_ConditionExprOperator::And;
}
