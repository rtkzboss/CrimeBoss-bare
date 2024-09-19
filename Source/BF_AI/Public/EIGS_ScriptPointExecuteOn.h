#pragma once
#include "CoreMinimal.h"
#include "EIGS_ScriptPointExecuteOn.generated.h"

UENUM(BlueprintType)
enum class EIGS_ScriptPointExecuteOn : uint8 {
    ExecuteOn_Arrive UMETA(DisplayName=Arrive),
    ExecuteOn_Approach UMETA(DisplayName=Approach),
    ExecuteOn_Visit UMETA(DisplayName=Visit),
};
