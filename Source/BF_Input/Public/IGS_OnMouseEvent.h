#pragma once
#include "CoreMinimal.h"
#include "IGS_OnMouseEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnMouseEvent, bool, inDown);
