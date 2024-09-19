#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerSwapPreventedReason.generated.h"

UENUM(BlueprintType)
enum class EIGS_PlayerSwapPreventedReason : uint8 {
    SP_Unknown UMETA(DisplayName=Unknown),
    SP_PlayerBusy UMETA(DisplayName="Player Busy"),
    SP_PlayerDead UMETA(DisplayName="Player Dead"),
    SP_PlayerDowned UMETA(DisplayName="Player Downed"),
    SP_PlayerLocation UMETA(DisplayName="Player Location"),
    SP_BotBusy = 11 UMETA(DisplayName="Bot Busy"),
    SP_BotDead UMETA(DisplayName="Bot Dead"),
    SP_BotDowned UMETA(DisplayName="Bot Downed"),
};
