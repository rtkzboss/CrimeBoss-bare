#pragma once
#include "CoreMinimal.h"
#include "EIGS_DisplayMode.generated.h"

UENUM()
enum class EIGS_DisplayMode {
    DM_INVALID = 255,
    DM_FullScreen = 0,
    DM_Borderless,
    DM_Windowed,
    DM_MAX UMETA(Hidden),
};

