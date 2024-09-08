#pragma once
#include "CoreMinimal.h"
#include "EIGS_MusicMissionSource.generated.h"

UENUM()
enum class EIGS_MusicMissionSource : uint8 {
    None,
    Meta,
    Multiplayer,
    All,
};

