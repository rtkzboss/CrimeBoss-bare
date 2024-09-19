#pragma once
#include "CoreMinimal.h"
#include "EIGS_LocomotionState.generated.h"

UENUM(BlueprintType)
enum class EIGS_LocomotionState : uint8 {
    BT_None UMETA(DisplayName=None),
    BT_IdleStart UMETA(DisplayName="Idle Start"),
    BT_IdleStop UMETA(DisplayName="Idle Stop"),
    BT_MoveStart UMETA(DisplayName="Move Start"),
    BT_MoveStop UMETA(DisplayName="Move Stop"),
    BT_TurnStart UMETA(DisplayName="Turn Start"),
    BT_TurnStop UMETA(DisplayName="Turn Stop"),
    BT_ContinuousTurnStart UMETA(DisplayName="Continuous Turn Start"),
    BT_ContinuousTurnStop UMETA(DisplayName="Continuous Turn Stop"),
};
