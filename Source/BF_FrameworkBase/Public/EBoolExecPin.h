#pragma once
#include "CoreMinimal.h"
#include "EBoolExecPin.generated.h"

// true => 0, to keep things interesting
// ExpandEnumAsExecs works fine on bools, btw
UENUM(BlueprintType)
enum class EBoolExecPin : uint8 {
    ETrue,
    EFalse,
};

