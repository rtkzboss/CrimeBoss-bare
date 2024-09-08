#pragma once
#include "CoreMinimal.h"
#include "EIGS_TPP_DeathDamageTypeReaction.generated.h"

UENUM()
enum class EIGS_TPP_DeathDamageTypeReaction {
    D_OnlyPhysics,
    D_AnimationAndPhysics,
};

