#pragma once
#include "CoreMinimal.h"
#include "EBaseScreenModifier.generated.h"

UENUM()
enum class EBaseScreenModifier {
    None,
    Top,
    Bottom,
    Whole = 4,
};

