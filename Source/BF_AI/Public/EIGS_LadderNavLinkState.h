#pragma once
#include "CoreMinimal.h"
#include "EIGS_LadderNavLinkState.generated.h"

UENUM()
enum class EIGS_LadderNavLinkState {
    In,
    Running,
    Out,
};

