#pragma once
#include "CoreMinimal.h"
#include "EMETA_PlanningBoardItemStatus.generated.h"

UENUM()
enum class EMETA_PlanningBoardItemStatus : uint8 {
    None,
    InProgress,
    Failed,
    Success,
};

