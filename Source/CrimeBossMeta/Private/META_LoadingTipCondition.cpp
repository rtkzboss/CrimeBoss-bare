#include "META_LoadingTipCondition.h"

FMETA_LoadingTipCondition::FMETA_LoadingTipCondition() {
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Scenarios, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Scenarios, 0)).Empty();
    (*this).Conditions.Empty();
    (*this).Operator = EMETA_ConditionExprOperator::And;
}

