#pragma once
#include "CoreMinimal.h"
#include "EMETA_PerksPreference.generated.h"

UENUM()
enum class EMETA_PerksPreference : uint8 {
    Any,
    OnlyPositive,
    OnlyNegative,
};

