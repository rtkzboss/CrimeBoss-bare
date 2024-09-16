#pragma once
#include "CoreMinimal.h"
#include "IGS_VisorEffectsOnDrillSparksStateChange.generated.h"

class AActor;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_VisorEffectsOnDrillSparksStateChange, const AActor*, inDrill);
