#include "META_RandomWayChance.h"

FMETA_RandomWayChance::FMETA_RandomWayChance() {
    (*this).NodeId = 0;
    (*this).Chance = 1.000000000e+00f;
    (*this).Conditions = TArray<FMETA_AdditionalConditionChance>{};
    (*this).ConditionOperator = EMETA_ConditionExprOperator::Or;
}
