#pragma once
#include "CoreMinimal.h"
#include "IGS_LadderGrabStartedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LadderGrabStartedSignature, bool, IsGrabbingFromTop);