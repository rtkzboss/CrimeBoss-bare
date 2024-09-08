#pragma once
#include "CoreMinimal.h"
#include "EMETA_JobType.generated.h"

UENUM()
enum class EMETA_JobType : uint8 {
    TerritoryNeutralAttack,
    TerritoryRivalAttack,
    FPSMission,
    StoryTrade,
    Cinematic,
    TradeDealSell,
    TradeDealBuy,
    TerritoryDefence,
    Ambush,
};

