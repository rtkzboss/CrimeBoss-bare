#pragma once
#include "CoreMinimal.h"
#include "EMETA_UsingCrewInGraph.generated.h"

UENUM()
enum class EMETA_UsingCrewInGraph : uint8 {
    TemporaryCrew,
    KeepCrewOnlySuccess,
    KeepCrew,
    KeepCrewAndIgnoreLosses,
};

