#pragma once
#include "CoreMinimal.h"
#include "EMETA_DayStartEventReason.generated.h"

UENUM()
enum class EMETA_DayStartEventReason {
    NewDay,
    NewCampaign,
    CampaignLoad,
};

