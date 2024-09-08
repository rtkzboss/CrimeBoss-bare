#pragma once
#include "CoreMinimal.h"
#include "EMETA_AmbushStartMethod.generated.h"

UENUM()
enum class EMETA_AmbushStartMethod : uint8 {
    Calculate,
    DEGUB_ForceDecline,
    DEBUG_ForceStart,
};

