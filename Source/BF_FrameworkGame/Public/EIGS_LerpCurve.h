#pragma once
#include "CoreMinimal.h"
#include "EIGS_LerpCurve.generated.h"

UENUM(BlueprintType)
enum class EIGS_LerpCurve : uint8 {
    LerpCurve_None UMETA(DisplayName=None),
    LerpCurve_EaseIn UMETA(DisplayName="Ease In"),
    LerpCurve_EaseOut UMETA(DisplayName="Ease Out"),
    LerpCurve_EaseInBack UMETA(DisplayName="Ease In Back"),
    LerpCurve_EaseOutBack UMETA(DisplayName="Ease Out Back"),
};
