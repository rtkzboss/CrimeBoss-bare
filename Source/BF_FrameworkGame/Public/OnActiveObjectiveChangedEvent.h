#pragma once
#include "CoreMinimal.h"
#include "OnActiveObjectiveChangedEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActiveObjectiveChangedEvent, int32, inOldObjectiveID, int32, inNewObjectiveID);