#pragma once
#include "CoreMinimal.h"
#include "EIGS_TargetProximity.generated.h"

UENUM()
enum class EIGS_TargetProximity : uint8 {
    None,
    Close,
    Mid,
    Far,
};

