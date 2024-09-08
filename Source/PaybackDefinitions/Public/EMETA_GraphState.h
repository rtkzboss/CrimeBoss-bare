#pragma once
#include "CoreMinimal.h"
#include "EMETA_GraphState.generated.h"

UENUM()
enum class EMETA_GraphState {
    NotStarted,
    IsRunning,
    EndedWithSuccess,
    EndedWithFail,
};

