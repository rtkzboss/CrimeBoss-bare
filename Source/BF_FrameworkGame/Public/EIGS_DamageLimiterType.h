#pragma once
#include "CoreMinimal.h"
#include "EIGS_DamageLimiterType.generated.h"

UENUM()
enum class EIGS_DamageLimiterType : uint8 {
    DLT_None,
    DLT_FirstHit,
    DLT_DPSThreshold,
    DLT_LowHealth,
};

