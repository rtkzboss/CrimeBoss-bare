#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuSlotState.generated.h"

UENUM()
enum class EIGS_MenuSlotState {
    NotSeleced,
    Selecting,
    NotReady,
    Ready,
};

