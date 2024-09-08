#pragma once
#include "CoreMinimal.h"
#include "EIGS_DetectorState.generated.h"

UENUM()
enum class EIGS_DetectorState : uint8 {
    Patrolling,
    Detecting,
    Controlled,
    Disabled,
    Destroyed,
};

