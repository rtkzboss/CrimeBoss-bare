#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuInputState.generated.h"

UENUM(BlueprintType)
enum class EIGS_MenuInputState : uint8 {
    Input_Open UMETA(DisplayName=Open),
    Input_Close UMETA(DisplayName=Close),
    Input_Toggle UMETA(DisplayName=Toggle),
    Input_MAX UMETA(Hidden),
    Input_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
};
