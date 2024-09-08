#pragma once
#include "CoreMinimal.h"
#include "EIGS_TraficPathfindingType.generated.h"

UENUM()
enum class EIGS_TraficPathfindingType {
    None,
    FromDestination,
    ToExitPoint,
    ToDestination,
    ToClosestDestination,
};

