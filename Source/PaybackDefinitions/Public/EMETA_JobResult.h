#pragma once
#include "CoreMinimal.h"
#include "EMETA_JobResult.generated.h"

UENUM()
enum class EMETA_JobResult : uint8 {
    Success,
    Fail,
    Ignored,
    Custom,
    Escaped,
    MAX,
};

