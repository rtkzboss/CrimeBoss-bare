#pragma once
#include "CoreMinimal.h"
#include "IGS_StatusProgressChangedEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_StatusProgressChangedEvent, float, InProgress);