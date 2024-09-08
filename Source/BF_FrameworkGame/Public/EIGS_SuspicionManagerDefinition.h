#pragma once
#include "CoreMinimal.h"
#include "EIGS_SuspicionManagerDefinition.generated.h"

UENUM()
enum class EIGS_SuspicionManagerDefinition {
    Unknown = 255,
    AlarmRised = 0,
    GuardFirstKill,
    GuardMultikill,
    HQFinished,
    AllGuardsDead,
    HeistStarted,
};

