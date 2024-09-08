#pragma once
#include "CoreMinimal.h"
#include "EIGS_LerpCurve.generated.h"

UENUM()
enum class EIGS_LerpCurve : uint8 {
    LerpCurve_None,
    LerpCurve_EaseIn,
    LerpCurve_EaseOut,
    LerpCurve_EaseInBack,
    LerpCurve_EaseOutBack,
};

