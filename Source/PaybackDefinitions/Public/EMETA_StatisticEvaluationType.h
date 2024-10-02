#pragma once
#include "CoreMinimal.h"
#include "EMETA_StatisticEvaluationType.generated.h"

UENUM(BlueprintType)
enum class EMETA_StatisticEvaluationType : uint8 {
    None,
    Sum,
    Average,
    Minimum,
    Maximum,
};
