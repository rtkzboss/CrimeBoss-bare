#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueDiscard.generated.h"

UENUM()
enum class EIGS_DialogueDiscard : uint8 {
    None,
    LessPriority,
    EqualPriority,
};

