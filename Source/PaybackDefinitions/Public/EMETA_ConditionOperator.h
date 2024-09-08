#pragma once
#include "CoreMinimal.h"
#include "EMETA_ConditionOperator.generated.h"

UENUM()
enum class EMETA_ConditionOperator : uint8 {
    Equal,
    NotEqual,
    Greater,
    GreaterOrEqual,
    Less,
    LessOrEqual,
    Divisible,
};

