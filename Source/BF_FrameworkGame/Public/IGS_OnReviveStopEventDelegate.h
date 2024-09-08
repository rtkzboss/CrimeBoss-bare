#pragma once
#include "CoreMinimal.h"
#include "IGS_OnReviveStopEventDelegate.generated.h"

class APawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnReviveStopEvent, APawn*, inHealer);

