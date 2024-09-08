#pragma once
#include "CoreMinimal.h"
#include "EMETA_JobForceResult.generated.h"

UENUM()
enum class EMETA_JobForceResult : uint8 {
    JobSuccess,
    JobFailed,
    Custom,
    JobCalculate,
};

