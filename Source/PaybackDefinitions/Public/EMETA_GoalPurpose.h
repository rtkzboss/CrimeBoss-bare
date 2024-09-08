#pragma once
#include "CoreMinimal.h"
#include "EMETA_GoalPurpose.generated.h"

UENUM()
enum class EMETA_GoalPurpose : uint8 {
    INVALID,
    Progress,
    Profit,
    Benefit,
    Asset,
};

