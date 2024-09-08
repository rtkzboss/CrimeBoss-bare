#pragma once
#include "CoreMinimal.h"
#include "EMETA_BossLevelCategory.generated.h"

UENUM()
enum class EMETA_BossLevelCategory : uint8 {
    Boss,
    Progression,
    CampaignStart,
    Captain,
    Army,
};

