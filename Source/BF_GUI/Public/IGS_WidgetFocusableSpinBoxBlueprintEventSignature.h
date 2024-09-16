#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetFocusableSpinBoxBlueprintEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WidgetFocusableSpinBoxBlueprintEventSignature, int32, InValue);
