#pragma once
#include "CoreMinimal.h"
#include "EMETA_StatisticModificationType.generated.h"

UENUM()
enum class EMETA_StatisticModificationType : uint8 {
    None,
    Increment,
    Replace,
    Minimum,
    Maximum,
    Average,
};

