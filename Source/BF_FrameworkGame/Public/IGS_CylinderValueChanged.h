#pragma once
#include "CoreMinimal.h"
#include "IGS_CylinderValueChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_CylinderValueChanged, int32, inCylinderNumber, int32, InValue);
