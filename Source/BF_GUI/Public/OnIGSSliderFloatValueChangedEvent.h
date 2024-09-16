#pragma once
#include "CoreMinimal.h"
#include "OnIGSSliderFloatValueChangedEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIGSSliderFloatValueChangedEvent, float, Value);
