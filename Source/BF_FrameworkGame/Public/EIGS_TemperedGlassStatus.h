#pragma once
#include "CoreMinimal.h"
#include "EIGS_TemperedGlassStatus.generated.h"

UENUM()
enum class EIGS_TemperedGlassStatus : uint8 {
    Normal,
    Fractured,
    Destroyed,
};

