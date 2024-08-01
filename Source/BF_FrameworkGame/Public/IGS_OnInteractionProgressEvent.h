#pragma once
#include "CoreMinimal.h"
#include "IGS_OnInteractionProgressEvent.generated.h"

class UIGS_InteractiveComponent;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnInteractionProgressEvent, bool, inEnabled, UIGS_InteractiveComponent*, inInteractiveComponent);