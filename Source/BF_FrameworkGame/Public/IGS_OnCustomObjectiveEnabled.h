#pragma once
#include "CoreMinimal.h"
#include "IGS_OnCustomObjectiveEnabled.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnCustomObjectiveEnabled, bool, inEnabled);