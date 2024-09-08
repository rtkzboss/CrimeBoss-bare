#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldingHand.generated.h"

UENUM()
enum class EIGS_WieldingHand : uint8 {
    RightHand,
    LeftHand,
    AnyHand,
    BothHands,
    NoHand,
};

