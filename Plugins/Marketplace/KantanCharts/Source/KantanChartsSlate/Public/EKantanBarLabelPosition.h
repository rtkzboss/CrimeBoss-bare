#pragma once
#include "CoreMinimal.h"
#include "EKantanBarLabelPosition.generated.h"

UENUM()
enum class EKantanBarLabelPosition : uint8 {
    NoLabels,
    Standard,
    Overlaid,
};

