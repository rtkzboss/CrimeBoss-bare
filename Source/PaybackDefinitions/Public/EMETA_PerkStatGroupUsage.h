#pragma once
#include "CoreMinimal.h"
#include "EMETA_PerkStatGroupUsage.generated.h"

UENUM()
enum class EMETA_PerkStatGroupUsage : uint8 {
    PercentageHighest,
    PercentageLowest,
    PercentageBonus,
    Value,
};

