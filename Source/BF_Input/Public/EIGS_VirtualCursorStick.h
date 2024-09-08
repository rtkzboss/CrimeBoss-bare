#pragma once
#include "CoreMinimal.h"
#include "EIGS_VirtualCursorStick.generated.h"

UENUM()
enum class EIGS_VirtualCursorStick : uint8 {
    Invalid = 255,
    Left = 0,
    Right,
    Max,
};

