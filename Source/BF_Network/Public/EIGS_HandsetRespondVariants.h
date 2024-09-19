#pragma once
#include "CoreMinimal.h"
#include "EIGS_HandsetRespondVariants.generated.h"

UENUM(BlueprintType)
enum class EIGS_HandsetRespondVariants : uint8 {
    EIGS_Started UMETA(DisplayName=Started),
    EIGS_Stopped UMETA(DisplayName=Stopped),
};
