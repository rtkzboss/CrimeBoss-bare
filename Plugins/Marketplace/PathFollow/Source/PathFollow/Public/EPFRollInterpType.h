#pragma once
#include "CoreMinimal.h"
#include "EPFRollInterpType.generated.h"

UENUM()
enum class EPFRollInterpType : uint8 {
    Constant,
    Linear,
    LinearStable,
    Cubic,
    CubicClamped,
};

