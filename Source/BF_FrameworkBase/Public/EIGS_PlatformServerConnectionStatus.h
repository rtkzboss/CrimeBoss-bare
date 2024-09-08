#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlatformServerConnectionStatus.generated.h"

UENUM()
enum class EIGS_PlatformServerConnectionStatus : uint8 {
    Unknown,
    Connected,
    Disconnected,
};

