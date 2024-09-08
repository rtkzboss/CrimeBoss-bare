#pragma once
#include "CoreMinimal.h"
#include "EMETA_ArmyTier.generated.h"

UENUM()
enum class EMETA_ArmyTier : uint8 {
    Low,
    Normal,
    High,
    Elite,
    Special,
};

