#pragma once
#include "CoreMinimal.h"
#include "EMETA_GoalPriority.generated.h"

UENUM()
enum class EMETA_GoalPriority : uint8 {
    Low,
    Medium,
    High,
    VeryHigh,
};

