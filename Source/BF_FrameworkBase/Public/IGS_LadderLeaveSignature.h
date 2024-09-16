#pragma once
#include "CoreMinimal.h"
#include "IGS_LadderLeaveSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LadderLeaveSignature, bool, IsLeavingFromTop);
