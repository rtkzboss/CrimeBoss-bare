#pragma once
#include "CoreMinimal.h"
#include "EScreenModifier.generated.h"

UENUM()
enum class EScreenModifier : uint8 {
    None,
    HideUnderlayingViews,
    HideAllViews,
};

