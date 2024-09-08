#pragma once
#include "CoreMinimal.h"
#include "ECartesianRangeBoundType.generated.h"

UENUM()
enum class ECartesianRangeBoundType : uint8 {
    FixedValue,
    FitToData,
    FitToDataRounded,
};

