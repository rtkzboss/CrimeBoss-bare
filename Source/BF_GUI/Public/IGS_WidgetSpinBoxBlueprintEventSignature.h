#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetSpinBoxBlueprintEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WidgetSpinBoxBlueprintEventSignature, int32, InValue);
