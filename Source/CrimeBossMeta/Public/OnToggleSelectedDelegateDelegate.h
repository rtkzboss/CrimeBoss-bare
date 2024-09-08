#pragma once
#include "CoreMinimal.h"
#include "OnToggleSelectedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleSelectedDelegate, bool, isSelected);

