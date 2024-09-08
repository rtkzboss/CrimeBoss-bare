#pragma once
#include "CoreMinimal.h"
#include "EIGS_MuzzleLightState.generated.h"

UENUM()
enum class EIGS_MuzzleLightState {
    MZLS_Off,
    MZLS_FadingIn,
    MZLS_Lit,
    MZLS_FadingOut,
};

