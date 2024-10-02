#pragma once
#include "CoreMinimal.h"
#include "EMETA_TaskProgressDisplayType.generated.h"

UENUM(BlueprintType)
enum class EMETA_TaskProgressDisplayType : uint8 {
    Value,
    Percentage,
    Days,
};
