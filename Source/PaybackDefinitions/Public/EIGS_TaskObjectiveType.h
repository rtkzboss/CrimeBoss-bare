#pragma once
#include "CoreMinimal.h"
#include "EIGS_TaskObjectiveType.generated.h"

UENUM()
enum class EIGS_TaskObjectiveType : uint8 {
    None,
    Kill,
    Regular,
    Value,
    OrTask,
};

