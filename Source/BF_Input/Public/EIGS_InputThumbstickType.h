#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputThumbstickType.generated.h"

UENUM(BlueprintType)
enum class EIGS_InputThumbstickType : uint8 {
    IA_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
    IA_LeftThumbstick = 0 UMETA(DisplayName="Left Thumbstick"),
    IA_RightThumbstick UMETA(DisplayName="Right Thumbstick"),
};
