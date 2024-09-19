#pragma once
#include "CoreMinimal.h"
#include "EIGS_ThreatPointPriority.generated.h"

UENUM(BlueprintType)
enum class EIGS_ThreatPointPriority : uint8 {
    TPP_Low UMETA(DisplayName=Low),
    TPP_High UMETA(DisplayName=High),
};
