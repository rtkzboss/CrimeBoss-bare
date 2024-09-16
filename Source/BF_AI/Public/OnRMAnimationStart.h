#pragma once
#include "CoreMinimal.h"
#include "OnRMAnimationStart.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRMAnimationStart, float, AnimationDuration);
