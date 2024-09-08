#pragma once
#include "CoreMinimal.h"
#include "EIGS_PressurePhase.generated.h"

UENUM()
enum class EIGS_PressurePhase : uint8 {
    PP_Unknown = 255,
    PP_Control = 0,
    PP_Action,
};

