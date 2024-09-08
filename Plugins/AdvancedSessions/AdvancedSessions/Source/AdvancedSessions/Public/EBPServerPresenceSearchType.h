#pragma once
#include "CoreMinimal.h"
#include "EBPServerPresenceSearchType.generated.h"

UENUM()
enum class EBPServerPresenceSearchType : uint8 {
    AllServers,
    ClientServersOnly,
    DedicatedServersOnly,
};

