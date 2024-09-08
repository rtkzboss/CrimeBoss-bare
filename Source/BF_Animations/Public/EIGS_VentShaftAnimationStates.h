#pragma once
#include "CoreMinimal.h"
#include "EIGS_VentShaftAnimationStates.generated.h"

UENUM()
enum class EIGS_VentShaftAnimationStates : uint8 {
    VS_None,
    VS_VentShaftEnter,
    VS_VentShaftExit,
};

