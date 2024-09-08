#pragma once
#include "CoreMinimal.h"
#include "EIGS_MeleeTargetType.generated.h"

UENUM()
enum class EIGS_MeleeTargetType {
    MeleeTargetType_None,
    MeleeTargetType_StealthKill,
    MeleeTargetType_Break,
};

