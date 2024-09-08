#pragma once
#include "CoreMinimal.h"
#include "EIGS_TPP_ReloadStates.generated.h"

UENUM()
enum class EIGS_TPP_ReloadStates {
    Is_Not_Reloading,
    Reload_Start,
    Reload_Out,
    Reload_Interrupted,
    Reload_Interrupted_By_Shooting,
    Reload_Interrupted_By_Equipping,
};

