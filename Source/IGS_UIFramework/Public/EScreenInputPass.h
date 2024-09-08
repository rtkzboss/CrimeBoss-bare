#pragma once
#include "CoreMinimal.h"
#include "EScreenInputPass.generated.h"

UENUM()
enum class EScreenInputPass : uint8 {
    NoPass,
    PassNotHandled,
    PassEverything,
};

