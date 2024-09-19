#pragma once
#include "CoreMinimal.h"
#include "FIGS_PlayerThrowGrenadeStatesInfo.generated.h"

UENUM(BlueprintType)
enum class FIGS_PlayerThrowGrenadeStatesInfo : uint8 {
    EIGS_TPP_Throw_Started UMETA(DisplayName=Started),
    EIGS_TPP_Throw_Finished UMETA(DisplayName=Finished),
    EIGS_TPP_Throw_Canceled UMETA(DisplayName=Canceled),
};
