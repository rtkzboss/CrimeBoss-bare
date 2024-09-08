#pragma once
#include "CoreMinimal.h"
#include "IGS_OnTabSelectedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnTabSelectedEvent, int32, NewIndex);

