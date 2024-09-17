#include "META_CampaignModeCondition.h"

FMETA_CampaignModeCondition::FMETA_CampaignModeCondition() {
    (*this).ConditionalTag = FGameplayTag();
    (*this).Operator = EMETA_ConditionOperator::Greater;
    (*this).Value = 0;
}
