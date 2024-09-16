#pragma once
#include "CoreMinimal.h"
#include "IGS_StormIntensityChangedEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_StormIntensityChangedEvent, int32, inIntensity);
