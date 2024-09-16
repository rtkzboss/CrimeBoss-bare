#pragma once
#include "CoreMinimal.h"
#include "IGS_OnReviveStopEvent.generated.h"

class APawn;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnReviveStopEvent, APawn*, inHealer);
