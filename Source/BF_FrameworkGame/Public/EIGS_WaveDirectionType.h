#pragma once
#include "CoreMinimal.h"
#include "EIGS_WaveDirectionType.generated.h"

UENUM()
enum class EIGS_WaveDirectionType {
    WDT_None,
    WDT_North,
    WDT_East,
    WDT_South,
    WDT_West,
};

