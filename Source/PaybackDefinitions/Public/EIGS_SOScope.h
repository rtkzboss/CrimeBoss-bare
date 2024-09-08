#pragma once
#include "CoreMinimal.h"
#include "EIGS_SOScope.generated.h"

UENUM()
enum class EIGS_SOScope {
    None,
    OverrideLimbo,
    OverrideAlarm,
    OverrideReaction = 4,
    CancelOnCombatTargetSeen = 8,
    IgnoreFightForWaypoint = 16,
};

