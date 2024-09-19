#pragma once
#include "CoreMinimal.h"
#include "EIGS_DisplayMode.generated.h"

UENUM(BlueprintType)
enum class EIGS_DisplayMode : uint8 {
    DM_INVALID = 255 UMETA(DisplayName=INVALID),
    DM_FullScreen = 0 UMETA(DisplayName="Full Screen"),
    DM_Borderless UMETA(DisplayName=Borderless),
    DM_Windowed UMETA(DisplayName=Windowed),
    DM_MAX UMETA(Hidden),
};
