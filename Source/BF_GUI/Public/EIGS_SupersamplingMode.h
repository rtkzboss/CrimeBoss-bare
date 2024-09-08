#pragma once
#include "CoreMinimal.h"
#include "EIGS_SupersamplingMode.generated.h"

UENUM()
enum class EIGS_SupersamplingMode {
    SSM_Off,
    SSM_DLSS,
    SSM_XeSS,
    SSM_FSR,
};

