#pragma once
#include "CoreMinimal.h"
#include "FIGS_ZiplineAnimationStates.generated.h"

UENUM(BlueprintType)
enum class FIGS_ZiplineAnimationStates : uint8 {
    LD_Started UMETA(DisplayName=Started),
    LD_Ended UMETA(DisplayName=Ended),
};
