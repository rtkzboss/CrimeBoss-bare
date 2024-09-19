#pragma once
#include "CoreMinimal.h"
#include "EIGS_InteractionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_InteractionType : uint8 {
    Interaction_Press UMETA(DisplayName=Press),
    Interaction_Hold UMETA(DisplayName=Hold),
    Interaction_Invalid UMETA(DisplayName=Invalid),
};
