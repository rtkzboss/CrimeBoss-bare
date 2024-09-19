#pragma once
#include "CoreMinimal.h"
#include "EIGS_ThreatLevel.generated.h"

UENUM(BlueprintType)
enum class EIGS_ThreatLevel : uint8 {
    Threat_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
    Threat_None = 0 UMETA(DisplayName=None),
    Threat_Suspicious UMETA(DisplayName=Suspicious),
    Threat_Dangerous UMETA(DisplayName=Dangerous),
};
