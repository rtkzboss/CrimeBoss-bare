#pragma once
#include "CoreMinimal.h"
#include "EMETA_PlotlineAssetAvailability.generated.h"

UENUM()
enum class EMETA_PlotlineAssetAvailability : uint8 {
    INVALID,
    Now,
    Unlock,
    Story,
    OwnedByDefault,
};

