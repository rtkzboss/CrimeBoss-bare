#pragma once
#include "CoreMinimal.h"
#include "IGS_DetectorTargetChanged.generated.h"

class AActor;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_DetectorTargetChanged, AActor*, inTarget);