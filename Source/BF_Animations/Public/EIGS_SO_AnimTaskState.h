#pragma once
#include "CoreMinimal.h"
#include "EIGS_SO_AnimTaskState.generated.h"

UENUM()
enum class EIGS_SO_AnimTaskState {
    SO_Unknown = 255,
    SO_Running = 0,
    SO_Finished,
};

