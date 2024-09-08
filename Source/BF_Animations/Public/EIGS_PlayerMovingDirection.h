#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerMovingDirection.generated.h"

UENUM()
enum class EIGS_PlayerMovingDirection {
    D_Dorward,
    D_Backward,
    D_Left,
    D_Right,
    D_None,
};

