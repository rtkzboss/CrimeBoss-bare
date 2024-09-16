#pragma once
#include "CoreMinimal.h"
#include "IGS_GiveUpEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_GiveUpEvent, bool, inIsHolding);
