#pragma once
#include "CoreMinimal.h"
#include "IGS_OnOverheatStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnOverheatStateChanged, bool, inState);

