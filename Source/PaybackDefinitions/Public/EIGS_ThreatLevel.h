#pragma once
#include "CoreMinimal.h"
#include "EIGS_ThreatLevel.generated.h"

UENUM()
enum class EIGS_ThreatLevel {
    Threat_UNKNOWN = 255,
    Threat_None = 0,
    Threat_Suspicious,
    Threat_Dangerous,
};

