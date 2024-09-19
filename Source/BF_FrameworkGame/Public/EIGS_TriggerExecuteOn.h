#pragma once
#include "CoreMinimal.h"
#include "EIGS_TriggerExecuteOn.generated.h"

UENUM(BlueprintType)
enum class EIGS_TriggerExecuteOn : uint8 {
    EIGS_BeginOverlap UMETA(DisplayName="Begin Overlap"),
    EIGS_EndOverlap UMETA(DisplayName="End Overlap"),
    EIGS_Both UMETA(DisplayName=Both),
};
