#pragma once
#include "CoreMinimal.h"
#include "EIGS_DetectionDefinition.generated.h"

UENUM()
enum class EIGS_DetectionDefinition {
    Unknown = 255,
    Start = 0,
    End,
};

