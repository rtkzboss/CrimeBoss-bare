#pragma once
#include "CoreMinimal.h"
#include "EMETA_PlotlineGraphStartTime.generated.h"

UENUM()
enum class EMETA_PlotlineGraphStartTime : uint8 {
    First,
    Universal,
    Late,
    Never,
};

