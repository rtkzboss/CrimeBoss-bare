#pragma once
#include "CoreMinimal.h"
#include "EIGS_TPP_DeathDamageTypeReaction.generated.h"

UENUM(BlueprintType)
enum class EIGS_TPP_DeathDamageTypeReaction : uint8 {
    D_OnlyPhysics UMETA(DisplayName="Only Physics"),
    D_AnimationAndPhysics UMETA(DisplayName="Animation And Physics"),
};
