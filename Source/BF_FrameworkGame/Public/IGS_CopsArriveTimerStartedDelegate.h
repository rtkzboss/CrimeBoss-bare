#pragma once
#include "CoreMinimal.h"
#include "IGS_CopsArriveTimerStartedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CopsArriveTimerStarted, float, InTime);

