#include "META_ActiveCampaignConfiguration.h"

FMETA_ActiveCampaignConfiguration::FMETA_ActiveCampaignConfiguration() {
    (*this).CampaignMode = FGameplayTag();
    (*this).Difficulty = EIGS_UserDifficulty::UD_Unknown;
}
