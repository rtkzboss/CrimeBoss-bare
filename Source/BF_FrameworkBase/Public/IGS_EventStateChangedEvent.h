#pragma once
#include "CoreMinimal.h"
#include "EIGS_EventState.h"
#include "IGS_EventStateChangedEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_EventStateChangedEvent, FName, inID, EIGS_EventState, inOldState, EIGS_EventState, inNewState);
