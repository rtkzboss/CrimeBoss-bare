#pragma once
#include "CoreMinimal.h"
#include "EIGS_PerformanceProfile.generated.h"

UENUM()
enum class EIGS_PerformanceProfile {
    PP_Custom,
    PP_Low,
    PP_Medium,
    PP_High,
    PP_Epic,
    PP_Cinematic,
    PP_Auto,
};

