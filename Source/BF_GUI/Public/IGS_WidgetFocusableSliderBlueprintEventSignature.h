#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetFocusableSliderBlueprintEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WidgetFocusableSliderBlueprintEventSignature, float, InValue);
