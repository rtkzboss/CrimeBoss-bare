#pragma once
#include "CoreMinimal.h"
#include "IGS_OnReviveStartEvent.generated.h"

class APawn;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnReviveStartEvent, APawn*, inHealer);
