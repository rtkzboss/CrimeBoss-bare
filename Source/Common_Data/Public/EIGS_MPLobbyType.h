#pragma once
#include "CoreMinimal.h"
#include "EIGS_MPLobbyType.generated.h"

UENUM()
enum class EIGS_MPLobbyType : uint8 {
    INVALID = 255,
    Normal = 0,
    QuickJoin,
};

