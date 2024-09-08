#pragma once
#include "CoreMinimal.h"
#include "EIGS_DsEffectMode.generated.h"

UENUM()
enum class EIGS_DsEffectMode {
    Off,
    Weapon,
    Vibration,
    Feedback,
    SlopeFeedback,
    MultiplePositionFeedback,
    MultiplePositionVibration,
};

