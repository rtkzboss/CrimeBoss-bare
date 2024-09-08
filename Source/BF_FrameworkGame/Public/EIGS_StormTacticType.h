#pragma once
#include "CoreMinimal.h"
#include "EIGS_StormTacticType.generated.h"

UENUM()
enum class EIGS_StormTacticType : uint8 {
    STT_None,
    STT_Retreat,
    STT_Push,
};

