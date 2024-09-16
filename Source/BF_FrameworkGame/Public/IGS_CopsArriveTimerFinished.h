#pragma once
#include "CoreMinimal.h"
#include "IGS_CopsArriveTimerFinished.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CopsArriveTimerFinished, bool, inAborted);
