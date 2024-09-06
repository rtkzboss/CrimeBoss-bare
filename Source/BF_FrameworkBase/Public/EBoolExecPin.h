#pragma once
#include "CoreMinimal.h"
#include "EBoolExecPin.generated.h"

UENUM(BlueprintType)
enum class EBoolExecPin : uint8 {
    // true => 0, to keep things interesting
    // ExpandEnumAsExecs works fine on bools, btw
    ETrue,
    EFalse,
};
