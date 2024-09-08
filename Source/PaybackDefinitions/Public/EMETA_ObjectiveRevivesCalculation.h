#pragma once
#include "CoreMinimal.h"
#include "EMETA_ObjectiveRevivesCalculation.generated.h"

UENUM()
enum class EMETA_ObjectiveRevivesCalculation : uint8 {
    AccumulateForAll,
    PerMember,
};

