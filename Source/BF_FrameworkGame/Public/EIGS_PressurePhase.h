#pragma once
#include "CoreMinimal.h"
#include "EIGS_PressurePhase.generated.h"

UENUM(BlueprintType)
enum class EIGS_PressurePhase : uint8 {
    PP_Unknown = 255 UMETA(DisplayName=Unknown),
    PP_Control = 0 UMETA(DisplayName=Control),
    PP_Action UMETA(DisplayName=Action),
};
