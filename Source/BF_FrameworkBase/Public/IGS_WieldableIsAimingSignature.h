#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableIsAimingSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WieldableIsAimingSignature, bool, inIsAiming);
