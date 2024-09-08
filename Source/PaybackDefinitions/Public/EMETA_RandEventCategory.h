#pragma once
#include "CoreMinimal.h"
#include "EMETA_RandEventCategory.generated.h"

UENUM()
enum class EMETA_RandEventCategory : uint8 {
    None,
    HeatAndInvestigation,
    TurfWar,
    Crew,
    EnemyGang,
    Economy,
};

