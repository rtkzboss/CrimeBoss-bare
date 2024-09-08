#pragma once
#include "CoreMinimal.h"
#include "EIGS_LootBagDefinition.generated.h"

UENUM()
enum class EIGS_LootBagDefinition {
    Unknown = 255,
    PickedUp = 0,
    CatchInAir,
};

