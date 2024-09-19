#include "IGS_PlotlineGraphNestedCondition.h"

FIGS_PlotlineGraphNestedCondition::FIGS_PlotlineGraphNestedCondition() {
    (*this).Conditions = TArray<UObject*>{};
    (*this).InnerConditionOperator = EMETA_ConditionExprOperator::And;
}
