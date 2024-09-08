#pragma once
#include "CoreMinimal.h"
#include "MiniLerpOutputPinDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMiniLerpOutputPin, float, inCurrentValue);

