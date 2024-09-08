#pragma once
#include "CoreMinimal.h"
#include "EIGS_BreachableState.generated.h"

UENUM()
enum class EIGS_BreachableState {
    Clear,
    Open,
    HalfOpen,
    Closed,
    Static,
};

