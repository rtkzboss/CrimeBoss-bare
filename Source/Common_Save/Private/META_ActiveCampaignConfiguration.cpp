#include "META_ActiveCampaignConfiguration.h"

FMETA_ActiveCampaignConfiguration::FMETA_ActiveCampaignConfiguration() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).CampaignMode, 0)) = NAME_None;
    (*this).Difficulty = EIGS_UserDifficulty::UD_Unknown;
}
