#pragma once
#include "CoreMinimal.h"
#include "EIGS_InteractionWarningPriority.generated.h"

UENUM()
enum class EIGS_InteractionWarningPriority : uint8 {
    None,
    Critical,
    Important,
};

