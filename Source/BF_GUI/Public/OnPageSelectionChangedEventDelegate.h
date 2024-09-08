#pragma once
#include "CoreMinimal.h"
#include "OnPageSelectionChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPageSelectionChangedEvent, int32, NewIndex);

