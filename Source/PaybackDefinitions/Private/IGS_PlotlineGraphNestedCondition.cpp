#include "IGS_PlotlineGraphNestedCondition.h"

FIGS_PlotlineGraphNestedCondition::FIGS_PlotlineGraphNestedCondition() {
    (*this).Conditions = {};
    (*this).InnerConditionOperator = EMETA_ConditionExprOperator::And;
}
