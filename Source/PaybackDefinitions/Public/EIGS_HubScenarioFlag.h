#pragma once
#include "CoreMinimal.h"
#include "EIGS_HubScenarioFlag.generated.h"

UENUM()
enum class EIGS_HubScenarioFlag : uint8 {
    Empty,
    Start,
    Objective,
    Exit,
    Start_Objective,
    Objective_Exit,
    Start_Exit,
    Start_Objective_Exit,
};

