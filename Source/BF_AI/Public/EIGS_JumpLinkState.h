#pragma once
#include "CoreMinimal.h"
#include "EIGS_JumpLinkState.generated.h"

UENUM()
enum class EIGS_JumpLinkState {
    In,
    Running,
    Out,
};

