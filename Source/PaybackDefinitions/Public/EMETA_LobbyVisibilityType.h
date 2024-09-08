#pragma once
#include "CoreMinimal.h"
#include "EMETA_LobbyVisibilityType.generated.h"

UENUM()
enum class EMETA_LobbyVisibilityType : uint8 {
    Unknown,
    Public,
    Private,
};

