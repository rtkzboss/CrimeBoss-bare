#pragma once
#include "CoreMinimal.h"
#include "IGS_OnOverheatStateChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnOverheatStateChanged, bool, inState);
