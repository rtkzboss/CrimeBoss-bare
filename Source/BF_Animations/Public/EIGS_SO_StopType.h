#pragma once
#include "CoreMinimal.h"
#include "EIGS_SO_StopType.generated.h"

UENUM()
enum class EIGS_SO_StopType {
    SO_Unknown = 255,
    SO_LoopOutAnim = 0,
    SO_BreakAnim,
    SO_Immediate,
};

