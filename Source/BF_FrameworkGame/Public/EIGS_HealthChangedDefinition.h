#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthChangedDefinition.generated.h"

UENUM()
enum class EIGS_HealthChangedDefinition {
    Unknown = 255,
    Normal = 0,
    Accumulated,
};

