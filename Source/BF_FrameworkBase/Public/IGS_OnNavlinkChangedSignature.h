#pragma once
#include "CoreMinimal.h"
#include "IGS_OnNavlinkChangedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnNavlinkChangedSignature, bool, inState);