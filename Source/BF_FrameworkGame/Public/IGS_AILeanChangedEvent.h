#pragma once
#include "CoreMinimal.h"
#include "EIGS_LeanSide.h"
#include "IGS_AILeanChangedEvent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_AILeanChangedEvent, EIGS_LeanSide, inLeanSide);
