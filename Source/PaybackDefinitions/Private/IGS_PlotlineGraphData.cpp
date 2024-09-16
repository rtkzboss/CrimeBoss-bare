#include "IGS_PlotlineGraphData.h"
#include "EMETA_PlotlineGraphStartTime.h"

FIGS_PlotlineGraphData::FIGS_PlotlineGraphData() {
    (*this).Graph = FSoftObjectPath();
    (*this).StartTime.Time = EMETA_PlotlineGraphStartTime::Universal;
    (*this).StartTime.MinDay = 0;
    (*this).PlotlineConditions = {};
    (*this).OuterConditionOperator = EMETA_ConditionExprOperator::Or;
}
