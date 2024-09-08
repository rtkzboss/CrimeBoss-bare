#pragma once
#include "CoreMinimal.h"
#include "EIGS_InteractionWarningType.generated.h"

UENUM()
enum class EIGS_InteractionWarningType : uint8 {
    None,
    ObjectiveNotCompleted,
    ObjectiveCompleted,
    BossDowned,
    AnyHeisterDowned,
};

