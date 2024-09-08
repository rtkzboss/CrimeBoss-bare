#pragma once
#include "CoreMinimal.h"
#include "EXeSSQualityMode.generated.h"

UENUM()
enum class EXeSSQualityMode : uint8 {
    Off,
    UltraPerformance,
    Performance,
    Balanced,
    Quality,
    UltraQuality,
    UltraQualityPlus,
    AntiAliasing,
};

