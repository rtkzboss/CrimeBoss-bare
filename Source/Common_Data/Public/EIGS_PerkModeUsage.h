#pragma once
#include "CoreMinimal.h"
#include "EIGS_PerkModeUsage.generated.h"

UENUM()
enum class EIGS_PerkModeUsage {
    None,
    Singleplayer,
    Multiplayer,
    Boss = 4,
};

