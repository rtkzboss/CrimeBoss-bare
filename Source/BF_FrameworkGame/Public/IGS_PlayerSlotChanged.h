#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerSlotChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PlayerSlotChanged, int32, inSlot);
