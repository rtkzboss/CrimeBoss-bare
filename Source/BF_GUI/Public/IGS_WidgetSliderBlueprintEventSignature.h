#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetSliderBlueprintEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WidgetSliderBlueprintEventSignature, float, InValue);
