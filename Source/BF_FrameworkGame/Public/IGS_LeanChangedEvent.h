#pragma once
#include "CoreMinimal.h"
#include "EIGS_LeanSide.h"
#include "IGS_LeanChangedEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LeanChangedEvent, EIGS_LeanSide, inLeanSide);