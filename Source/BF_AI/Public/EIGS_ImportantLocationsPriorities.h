#pragma once
#include "CoreMinimal.h"
#include "EIGS_ImportantLocationsPriorities.generated.h"

UENUM(BlueprintType)
enum class EIGS_ImportantLocationsPriorities : uint8 {
    BT_Squad UMETA(DisplayName=Squad),
    BT_Character UMETA(DisplayName=Character),
    BT_Defending UMETA(DisplayName=Defending),
    BT_Breaching UMETA(DisplayName=Breaching),
};
