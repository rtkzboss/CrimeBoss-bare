#pragma once
#include "CoreMinimal.h"
#include "EIGS_AIHitReactionVariant.generated.h"

UENUM()
enum class EIGS_AIHitReactionVariant : uint8 {
    SO_Unknown = 255,
    Front = 0,
    Left,
    Back,
    Right,
};

