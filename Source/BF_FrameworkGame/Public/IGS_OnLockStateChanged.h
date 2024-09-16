#pragma once
#include "CoreMinimal.h"
#include "IGS_OnLockStateChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnLockStateChanged, bool, inLocked);
