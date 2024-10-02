#pragma once
#include "CoreMinimal.h"
#include "EIGS_EventState.generated.h"

UENUM(BlueprintType)
enum class EIGS_EventState : uint8 {
    None,
    Active,
    Visible,
    Inactive,
};
