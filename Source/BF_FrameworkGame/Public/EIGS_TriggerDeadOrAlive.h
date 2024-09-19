#pragma once
#include "CoreMinimal.h"
#include "EIGS_TriggerDeadOrAlive.generated.h"

UENUM(BlueprintType)
enum class EIGS_TriggerDeadOrAlive : uint8 {
    DOA_Alive UMETA(DisplayName=Alive),
    DOA_Dead UMETA(DisplayName=Dead),
    DOA_Both UMETA(DisplayName=Both),
};
