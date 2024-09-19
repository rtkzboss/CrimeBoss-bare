#include "META_CampaignModeMatchingData.h"

FMETA_CampaignModeMatchingData::FMETA_CampaignModeMatchingData() {
    (*this).CampaignMode = FSoftObjectPath();
    (*this).Conditions = TArray<FMETA_CampaignModeCondition>{};
    (*this).ExpressionOperator = EMETA_ConditionExprOperator::And;
}
