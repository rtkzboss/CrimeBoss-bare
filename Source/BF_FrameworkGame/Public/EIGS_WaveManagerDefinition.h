#pragma once
#include "CoreMinimal.h"
#include "EIGS_WaveManagerDefinition.generated.h"

UENUM()
enum class EIGS_WaveManagerDefinition {
    Unknown = 255,
    AssaultStart = 0,
    ControlStart,
    AssaultEndingSoon,
};

