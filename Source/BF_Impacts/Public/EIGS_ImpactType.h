#pragma once
#include "CoreMinimal.h"
#include "EIGS_ImpactType.generated.h"

UENUM()
enum class EIGS_ImpactType : uint8 {
    None,
    Sound,
    Particle,
    Decal,
    ImpactMax = Decal,
};

