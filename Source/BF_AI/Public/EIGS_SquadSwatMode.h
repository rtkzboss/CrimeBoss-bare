#pragma once
#include "CoreMinimal.h"
#include "EIGS_SquadSwatMode.generated.h"

UENUM()
enum class EIGS_SquadSwatMode : uint8 {
    None,
    ChasePlayer,
    Escape,
    Control,
    Scripted,
    DisruptGadget,
};

