#pragma once
#include "CoreMinimal.h"
#include "IGS_IsTargetChangedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_IsTargetChangedSignature, bool, isTarget);
