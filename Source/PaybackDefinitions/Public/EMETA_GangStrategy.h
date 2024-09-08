#pragma once
#include "CoreMinimal.h"
#include "EMETA_GangStrategy.generated.h"

UENUM()
enum class EMETA_GangStrategy : uint8 {
    Normal,
    Defensive,
    Conqueror,
    Retaliator,
    Rage,
};

