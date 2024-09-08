#pragma once
#include "CoreMinimal.h"
#include "IGS_OnCinematicModeChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnCinematicModeChanged, bool, inState);

