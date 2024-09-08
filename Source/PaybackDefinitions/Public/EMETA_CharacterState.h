#pragma once
#include "CoreMinimal.h"
#include "EMETA_CharacterState.generated.h"

UENUM()
enum class EMETA_CharacterState : uint8 {
    None,
    Available,
    Resting,
    Missing,
    Arrested,
    Jailed,
    MissionLocked,
    Dead,
    Buried,
    Healing,
};

