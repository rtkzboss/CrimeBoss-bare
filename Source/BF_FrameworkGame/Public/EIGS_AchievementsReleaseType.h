#pragma once
#include "CoreMinimal.h"
#include "EIGS_AchievementsReleaseType.generated.h"

UENUM()
enum class EIGS_AchievementsReleaseType : uint8 {
    BaseGame,
    MajorUpdate,
    MinorUpdate,
};

