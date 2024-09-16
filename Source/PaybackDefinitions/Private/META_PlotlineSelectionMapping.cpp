#include "META_PlotlineSelectionMapping.h"

UMETA_PlotlineSelectionMapping::UMETA_PlotlineSelectionMapping() {
    (*this).DefaultCampaignMode = FSoftObjectPath();
}

TSoftObjectPtr<UMETA_PlotlineSelection> UMETA_PlotlineSelectionMapping::GetDefaultCampaignMode() const {
    return {};
}

