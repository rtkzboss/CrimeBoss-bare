#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnregisterReason.generated.h"

UENUM(BlueprintType)
enum class EIGS_UnregisterReason : uint8 {
    UR_EndPlay UMETA(DisplayName="End Play"),
    UR_Death UMETA(DisplayName=Death),
    UR_BotSwitch UMETA(DisplayName="Bot Switch"),
};
