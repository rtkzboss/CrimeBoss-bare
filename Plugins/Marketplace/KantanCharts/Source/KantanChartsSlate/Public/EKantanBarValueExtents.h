#pragma once
#include "CoreMinimal.h"
#include "EKantanBarValueExtents.generated.h"

UENUM()
enum class EKantanBarValueExtents : uint8 {
    NoValueLines,
    ZeroLineOnly,
    ZeroAndMaxLines,
};

