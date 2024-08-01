#pragma once
#include "CoreMinimal.h"
#include "DetectorBaseStateChangedEvent.generated.h"

class AIGS_DetectorBase;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDetectorBaseStateChangedEvent, AIGS_DetectorBase*, inDetectorBase);