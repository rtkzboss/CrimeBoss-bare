#pragma once
#include "CoreMinimal.h"
#include "MiniLerpOutputPin.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMiniLerpOutputPin, float, inCurrentValue);
