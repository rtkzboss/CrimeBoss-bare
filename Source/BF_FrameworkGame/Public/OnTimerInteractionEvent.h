#pragma once
#include "CoreMinimal.h"
#include "OnTimerInteractionEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTimerInteractionEvent, bool, inEnabled, float, inTotalTime);
