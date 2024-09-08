#pragma once
#include "CoreMinimal.h"
#include "IGS_OnOverheatValueChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnOverheatValueChanged, float, InValue);

