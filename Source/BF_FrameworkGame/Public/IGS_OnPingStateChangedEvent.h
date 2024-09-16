#pragma once
#include "CoreMinimal.h"
#include "IGS_OnPingStateChangedEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnPingStateChangedEvent, bool, inPinged);
