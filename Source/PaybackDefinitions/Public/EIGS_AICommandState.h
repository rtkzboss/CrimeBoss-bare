#pragma once
#include "CoreMinimal.h"
#include "EIGS_AICommandState.generated.h"

UENUM()
enum class EIGS_AICommandState : uint8 {
    AICS_Running,
    AICS_Finished,
    AICS_Failed,
    AICS_Unknown = 255,
};

