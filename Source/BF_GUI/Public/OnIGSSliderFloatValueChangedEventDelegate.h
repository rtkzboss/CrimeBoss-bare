#pragma once
#include "CoreMinimal.h"
#include "OnIGSSliderFloatValueChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIGSSliderFloatValueChangedEvent, float, Value);

