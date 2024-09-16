#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_WieldableChangedEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WieldableChangedEventSignature, EIGS_WieldableSlot, inSlot);
