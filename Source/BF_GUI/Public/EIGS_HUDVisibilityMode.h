#pragma once
#include "CoreMinimal.h"
#include "EIGS_HUDVisibilityMode.generated.h"

UENUM()
enum class EIGS_HUDVisibilityMode : uint8 {
    HUD_Hidden,
    HUD_RelevantOnly,
    HUD_AlwaysVisible,
};

