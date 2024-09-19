#pragma once
#include "CoreMinimal.h"
#include "EIGS_MeleeTargetType.generated.h"

UENUM(BlueprintType)
enum class EIGS_MeleeTargetType : uint8 {
    MeleeTargetType_None UMETA(DisplayName=None),
    MeleeTargetType_StealthKill UMETA(DisplayName="Stealth Kill"),
    MeleeTargetType_Break UMETA(DisplayName=Break),
};
