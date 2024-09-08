#pragma once
#include "CoreMinimal.h"
#include "EPFEventFireMode.generated.h"

UENUM()
enum class EPFEventFireMode : uint8 {
    Forward,
    Reverse,
    Always,
};

