#pragma once
#include "CoreMinimal.h"
#include "EMETA_SequencePriority.generated.h"

UENUM()
enum class EMETA_SequencePriority : uint8 {
    Normal,
    High,
    Critical,
};

