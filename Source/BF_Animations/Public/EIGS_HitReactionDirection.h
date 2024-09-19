#pragma once
#include "CoreMinimal.h"
#include "EIGS_HitReactionDirection.generated.h"

UENUM(BlueprintType)
enum class EIGS_HitReactionDirection : uint8 {
    D_Front UMETA(DisplayName=Front),
    D_Left UMETA(DisplayName=Left),
    D_Back UMETA(DisplayName=Back),
    D_Right UMETA(DisplayName=Right),
};
