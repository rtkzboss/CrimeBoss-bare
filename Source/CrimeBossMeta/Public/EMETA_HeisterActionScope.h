#pragma once
#include "CoreMinimal.h"
#include "EMETA_HeisterActionScope.generated.h"

UENUM()
enum class EMETA_HeisterActionScope : uint8 {
    None,
    AllHeistersInCrew,
    RandomHeistersFromCrew,
    ByCharacterID,
    SortedHeistersByConditions,
};

