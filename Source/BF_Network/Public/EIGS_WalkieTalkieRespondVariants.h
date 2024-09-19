#pragma once
#include "CoreMinimal.h"
#include "EIGS_WalkieTalkieRespondVariants.generated.h"

UENUM(BlueprintType)
enum class EIGS_WalkieTalkieRespondVariants : uint8 {
    EIGS_Started UMETA(DisplayName=Started),
    EIGS_Stopped UMETA(DisplayName=Stopped),
};
