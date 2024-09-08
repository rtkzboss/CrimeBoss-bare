#pragma once
#include "CoreMinimal.h"
#include "EIGS_WindowBreakBehaviour.generated.h"

UENUM()
enum class EIGS_WindowBreakBehaviour : uint8 {
    Breakable,
    Unbreakable,
    Impenetrable,
};

