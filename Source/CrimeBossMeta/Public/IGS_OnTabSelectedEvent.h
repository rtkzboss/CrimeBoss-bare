#pragma once
#include "CoreMinimal.h"
#include "IGS_OnTabSelectedEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnTabSelectedEvent, int32, NewIndex);
