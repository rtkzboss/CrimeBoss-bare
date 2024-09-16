#pragma once
#include "CoreMinimal.h"
#include "IGS_OnCinematicModeChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnCinematicModeChanged, bool, inState);
