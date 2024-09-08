#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputThumbstickType.generated.h"

UENUM()
enum class EIGS_InputThumbstickType : uint8 {
    IA_UNKNOWN = 255,
    IA_LeftThumbstick = 0,
    IA_RightThumbstick,
};

