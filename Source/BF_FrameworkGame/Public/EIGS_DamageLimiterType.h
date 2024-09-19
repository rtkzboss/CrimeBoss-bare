#pragma once
#include "CoreMinimal.h"
#include "EIGS_DamageLimiterType.generated.h"

UENUM(BlueprintType)
enum class EIGS_DamageLimiterType : uint8 {
    DLT_None UMETA(DisplayName=None),
    DLT_FirstHit UMETA(DisplayName="First Hit"),
    DLT_DPSThreshold UMETA(DisplayName="DPS Threshold"),
    DLT_LowHealth UMETA(DisplayName="Low Health"),
};
