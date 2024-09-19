#pragma once
#include "CoreMinimal.h"
#include "EIGS_StormTacticType.generated.h"

UENUM(BlueprintType)
enum class EIGS_StormTacticType : uint8 {
    STT_None UMETA(DisplayName=None),
    STT_Retreat UMETA(DisplayName=Retreat),
    STT_Push UMETA(DisplayName=Push),
};
