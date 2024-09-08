#pragma once
#include "CoreMinimal.h"
#include "EIGS_LightingScenarioType.generated.h"

UENUM()
enum class EIGS_LightingScenarioType : uint8 {
    Midday,
    Sunrise,
    Morning,
    Sunset,
    Night,
    RainyDay,
    RainyNight,
};

