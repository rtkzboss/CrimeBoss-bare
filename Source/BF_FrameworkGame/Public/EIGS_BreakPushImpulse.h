#pragma once
#include "CoreMinimal.h"
#include "EIGS_BreakPushImpulse.generated.h"

UENUM(BlueprintType)
enum class EIGS_BreakPushImpulse : uint8 {
    Break_Impulse_None UMETA(DisplayName=None),
    Break_Impulse_Forward UMETA(DisplayName=Forward),
    Break_Impulse_Right UMETA(DisplayName=Right),
    Break_Impulse_Up UMETA(DisplayName=Up),
    Break_Impulse_Custom UMETA(DisplayName=Custom),
};
