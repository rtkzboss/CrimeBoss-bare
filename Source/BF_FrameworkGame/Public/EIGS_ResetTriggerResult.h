#pragma once
#include "CoreMinimal.h"
#include "EIGS_ResetTriggerResult.generated.h"

UENUM()
enum class EIGS_ResetTriggerResult : uint8 {
    Fail,
    SuccessCharacter,
    SuccessBag,
    NoResult,
};

