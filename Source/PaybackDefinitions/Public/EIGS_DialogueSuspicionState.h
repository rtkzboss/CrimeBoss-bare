#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueSuspicionState.generated.h"

UENUM()
enum class EIGS_DialogueSuspicionState : uint8 {
    None,
    OnlyStealth,
    OnlyCombat,
};

