#pragma once
#include "CoreMinimal.h"
#include "EIGS_PingableType.h"
#include "IGS_OnPinged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnPinged, EIGS_PingableType, inType);
