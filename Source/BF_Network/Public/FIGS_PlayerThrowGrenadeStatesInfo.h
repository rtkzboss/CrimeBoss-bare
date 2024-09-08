#pragma once
#include "CoreMinimal.h"
#include "FIGS_PlayerThrowGrenadeStatesInfo.generated.h"

UENUM()
enum class FIGS_PlayerThrowGrenadeStatesInfo {
    EIGS_TPP_Throw_Started,
    EIGS_TPP_Throw_Finished,
    EIGS_TPP_Throw_Canceled,
};

