#pragma once
#include "CoreMinimal.h"
#include "EScreenInputMode.generated.h"

UENUM()
enum class EScreenInputMode : uint8 {
    NoChange,
    GameAndUI,
    UIOnly,
    GameOnly,
};

