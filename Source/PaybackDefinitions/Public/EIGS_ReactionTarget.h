#pragma once
#include "CoreMinimal.h"
#include "EIGS_ReactionTarget.generated.h"

UENUM(BlueprintType)
enum class EIGS_ReactionTarget : uint8 {
    Target_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
    Target_Actor = 0 UMETA(DisplayName=Actor),
    Target_Offender UMETA(DisplayName=Offender),
    Target_Special UMETA(DisplayName=Special),
};
