#pragma once
#include "CoreMinimal.h"
#include "EIGS_ZiplineNavLinkState.generated.h"

UENUM()
enum class EIGS_ZiplineNavLinkState {
    In,
    Running,
    Out,
};

