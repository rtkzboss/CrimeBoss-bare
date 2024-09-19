#pragma once
#include "CoreMinimal.h"
#include "EIGS_RenderingMode.generated.h"

UENUM(BlueprintType)
enum class EIGS_RenderingMode : uint8 {
    RM_INVALID = 255 UMETA(DisplayName=INVALID),
    RM_Performance = 0 UMETA(DisplayName=Performance),
    RM_Quality UMETA(DisplayName=Quality),
};
