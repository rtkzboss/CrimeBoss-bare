#pragma once
#include "CoreMinimal.h"
#include "EIGS_AreaOfOperationPriorities.generated.h"

UENUM(BlueprintType)
enum class EIGS_AreaOfOperationPriorities : uint8 {
    BT_Squad UMETA(DisplayName=Squad),
    BT_Defending UMETA(DisplayName=Defending),
};
