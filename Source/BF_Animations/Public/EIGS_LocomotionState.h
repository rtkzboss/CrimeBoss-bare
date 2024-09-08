#pragma once
#include "CoreMinimal.h"
#include "EIGS_LocomotionState.generated.h"

UENUM()
enum class EIGS_LocomotionState {
    BT_None,
    BT_IdleStart,
    BT_IdleStop,
    BT_MoveStart,
    BT_MoveStop,
    BT_TurnStart,
    BT_TurnStop,
    BT_ContinuousTurnStart,
    BT_ContinuousTurnStop,
};

