#pragma once
#include "CoreMinimal.h"
#include "EIGS_RenderingMode.generated.h"

UENUM()
enum class EIGS_RenderingMode {
    RM_INVALID = 255,
    RM_Performance = 0,
    RM_Quality,
};

