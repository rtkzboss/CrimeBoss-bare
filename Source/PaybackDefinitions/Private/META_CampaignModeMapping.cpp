#include "META_CampaignModeMapping.h"

FMETA_CampaignModeMapping::FMETA_CampaignModeMapping() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).CampaignModeTag, 0)) = NAME_None;
    (*this).MatchingData = {};
}
