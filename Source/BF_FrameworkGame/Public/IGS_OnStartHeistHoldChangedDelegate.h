#pragma once
#include "CoreMinimal.h"
#include "IGS_OnStartHeistHoldChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnStartHeistHoldChanged, bool, inState);

