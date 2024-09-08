#pragma once
#include "CoreMinimal.h"
#include "EIGS_FootstepType.generated.h"

UENUM()
enum class EIGS_FootstepType : uint8 {
    None,
    Land,
    Jump,
    Walk,
    Run,
    Sprint,
    Crouch,
};

