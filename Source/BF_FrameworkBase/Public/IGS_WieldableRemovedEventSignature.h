#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_WieldableRemovedEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WieldableRemovedEventSignature, EIGS_WieldableSlot, inSlot);
