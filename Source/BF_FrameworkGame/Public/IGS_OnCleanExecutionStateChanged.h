#pragma once
#include "CoreMinimal.h"
#include "EIGS_CleanExecutionState.h"
#include "IGS_OnCleanExecutionStateChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnCleanExecutionStateChanged, EIGS_CleanExecutionState, inState);
