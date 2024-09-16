#pragma once
#include "CoreMinimal.h"
#include "IGS_OnDefendStateChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnDefendStateChanged, bool, inState);
