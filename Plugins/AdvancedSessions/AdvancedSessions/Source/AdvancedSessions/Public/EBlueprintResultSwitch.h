#pragma once
#include "CoreMinimal.h"
#include "EBlueprintResultSwitch.generated.h"

UENUM()
enum class EBlueprintResultSwitch : uint8 {
    OnSuccess,
    OnFailure,
};

