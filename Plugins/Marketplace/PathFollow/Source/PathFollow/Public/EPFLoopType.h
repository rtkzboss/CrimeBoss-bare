#pragma once
#include "CoreMinimal.h"
#include "EPFLoopType.generated.h"

UENUM()
enum class EPFLoopType : uint8 {
    Replay,
    ReplayFromStart,
    PingPong,
};

