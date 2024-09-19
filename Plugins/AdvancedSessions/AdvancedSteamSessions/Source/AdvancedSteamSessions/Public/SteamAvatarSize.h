#pragma once
#include "CoreMinimal.h"
#include "SteamAvatarSize.generated.h"

UENUM(BlueprintType)
enum class SteamAvatarSize : uint8 {
    SteamAvatar_INVALID UMETA(DisplayName=INVALID),
    SteamAvatar_Small UMETA(DisplayName=Small),
    SteamAvatar_Medium UMETA(DisplayName=Medium),
    SteamAvatar_Large UMETA(DisplayName=Large),
};
