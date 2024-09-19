#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerStateMachineState.generated.h"

UENUM(BlueprintType)
enum class EIGS_PlayerStateMachineState : uint8 {
    EIGS_Stand UMETA(DisplayName=Stand),
    EIGS_Down UMETA(DisplayName=Down),
};
