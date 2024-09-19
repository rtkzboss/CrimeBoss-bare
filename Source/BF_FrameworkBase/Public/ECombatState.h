#pragma once
#include "CoreMinimal.h"
#include "ECombatState.generated.h"

UENUM(BlueprintType)
enum class ECombatState : uint8 {
    CS_Idle UMETA(DisplayName=Idle),
    CS_Investigating UMETA(DisplayName=Investigating),
    CS_Searching UMETA(DisplayName=Searching),
    CS_Battle UMETA(DisplayName=Battle),
};
