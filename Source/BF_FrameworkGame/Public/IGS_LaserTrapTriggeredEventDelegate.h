#pragma once
#include "CoreMinimal.h"
#include "IGS_LaserTrapTriggeredEventDelegate.generated.h"

class AIGS_LaserTrapManager;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LaserTrapTriggeredEvent, AIGS_LaserTrapManager*, LaserManager);

