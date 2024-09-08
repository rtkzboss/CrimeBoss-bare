#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialoguePreloadOption.generated.h"

UENUM()
enum class EIGS_DialoguePreloadOption {
    NoPreload,
    MissionPreload,
    AllPreload,
};

