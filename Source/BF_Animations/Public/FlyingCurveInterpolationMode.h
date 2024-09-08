#pragma once
#include "CoreMinimal.h"
#include "FlyingCurveInterpolationMode.generated.h"

UENUM()
enum class FlyingCurveInterpolationMode : uint8 {
    Mode_Bezier,
    Mode_Catmull,
};

