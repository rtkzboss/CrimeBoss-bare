#pragma once
#include "CoreMinimal.h"
#include "OnToggleSelectedDelegate.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleSelectedDelegate, bool, isSelected);
