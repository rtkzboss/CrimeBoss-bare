#pragma once
#include "CoreMinimal.h"
#include "EIGS_TriggerDeadOrAlive.generated.h"

UENUM()
enum class EIGS_TriggerDeadOrAlive : uint8 {
    DOA_Alive,
    DOA_Dead,
    DOA_Both,
};

