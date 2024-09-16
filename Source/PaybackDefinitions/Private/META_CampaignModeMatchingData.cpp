#include "META_CampaignModeMatchingData.h"

FMETA_CampaignModeMatchingData::FMETA_CampaignModeMatchingData() {
    (*this).CampaignMode = FSoftObjectPath();
    (*this).Conditions = {};
    (*this).ExpressionOperator = EMETA_ConditionExprOperator::And;
}
