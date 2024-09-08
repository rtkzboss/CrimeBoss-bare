#pragma once
#include "CoreMinimal.h"
#include "IGS_OnPingStateChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnPingStateChangedEvent, bool, inPinged);

