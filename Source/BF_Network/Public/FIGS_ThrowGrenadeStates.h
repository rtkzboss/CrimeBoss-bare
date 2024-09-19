#pragma once
#include "CoreMinimal.h"
#include "FIGS_ThrowGrenadeStates.generated.h"

UENUM(BlueprintType)
enum class FIGS_ThrowGrenadeStates : uint8 {
    TH_ThrowStart UMETA(DisplayName="Throw Start"),
    TH_ThrowEnd UMETA(DisplayName="Throw End"),
    TH_ThrowCancel UMETA(DisplayName="Throw Cancel"),
};
