#pragma once
#include "CoreMinimal.h"
#include "OnInstanceBreakableStateChangedDelegate.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInstanceBreakableStateChangedDelegate, int32, InstanceIndex);
