#pragma once
#include "CoreMinimal.h"
#include "ESquadEventType.generated.h"

UENUM()
enum class ESquadEventType {
    EnemySeen,
    EnemyLost,
    NextRoomChanged,
    FightStarted,
    FightFinished,
    BreachPointChanged,
    BreachPointBestSquadChanged,
    TargetChanged,
    Unknown = 255,
};

