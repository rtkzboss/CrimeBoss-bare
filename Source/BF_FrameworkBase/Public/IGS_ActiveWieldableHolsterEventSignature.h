#pragma once
#include "CoreMinimal.h"
#include "IGS_ActiveWieldableHolsterEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_ActiveWieldableHolsterEventSignature, bool, inIsHolstering, bool, inSkipAnimation);
