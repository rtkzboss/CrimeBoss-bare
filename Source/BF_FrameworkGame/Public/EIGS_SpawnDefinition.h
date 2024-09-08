#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpawnDefinition.generated.h"

UENUM()
enum class EIGS_SpawnDefinition {
    Unknown = 255,
    Window = 0,
    Building,
    Vehicle,
};

