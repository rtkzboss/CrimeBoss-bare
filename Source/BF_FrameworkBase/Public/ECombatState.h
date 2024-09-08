#pragma once
#include "CoreMinimal.h"
#include "ECombatState.generated.h"

UENUM()
enum class ECombatState {
    CS_Idle,
    CS_Investigating,
    CS_Searching,
    CS_Battle,
};

