#pragma once
#include "CoreMinimal.h"
#include "EIGS_TextDeviceType.generated.h"

UENUM()
enum class EIGS_TextDeviceType {
    Keyboard,
    Gamepad,
    Other,
    Count,
};

