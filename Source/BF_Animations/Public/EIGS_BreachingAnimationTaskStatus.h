#pragma once
#include "CoreMinimal.h"
#include "EIGS_BreachingAnimationTaskStatus.generated.h"

UENUM()
enum class EIGS_BreachingAnimationTaskStatus {
    InActive,
    Running,
    Finished,
    Canceled,
};

