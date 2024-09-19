#pragma once
#include "CoreMinimal.h"
#include "EIGS_PostProcessType.generated.h"

UENUM(BlueprintType)
enum class EIGS_PostProcessType : uint8 {
    GPP_VisualStyle = 1 UMETA(DisplayName="Visual Style"),
    GPP_DirtMask UMETA(DisplayName="Dirt Mask"),
    GPP_None = 0 UMETA(DisplayName=None),
};
