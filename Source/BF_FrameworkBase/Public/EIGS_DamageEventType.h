#pragma once
#include "CoreMinimal.h"
#include "EIGS_DamageEventType.generated.h"

UENUM()
enum class EIGS_DamageEventType : uint8 {
    Any,
    Point,
    Radial,
    Healing,
    AutoHealing,
};

