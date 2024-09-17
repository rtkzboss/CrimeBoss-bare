#include "META_LoadingTipCondition.h"

FMETA_LoadingTipCondition::FMETA_LoadingTipCondition() {
    (*this).Scenarios = FGameplayTagContainer();
    (*this).Conditions = {};
    (*this).Operator = EMETA_ConditionExprOperator::And;
}
