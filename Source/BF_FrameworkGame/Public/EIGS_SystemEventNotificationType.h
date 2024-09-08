#pragma once
#include "CoreMinimal.h"
#include "EIGS_SystemEventNotificationType.generated.h"

UENUM()
enum class EIGS_SystemEventNotificationType {
    Unknown = 255,
    WaveManager = 0,
    SuspicionManager,
};

