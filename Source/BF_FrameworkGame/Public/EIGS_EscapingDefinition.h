#pragma once
#include "CoreMinimal.h"
#include "EIGS_EscapingDefinition.generated.h"

UENUM()
enum class EIGS_EscapingDefinition {
    Unknown = 255,
    Start = 0,
    Finished,
};

