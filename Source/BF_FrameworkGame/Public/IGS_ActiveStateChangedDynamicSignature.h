#pragma once
#include "CoreMinimal.h"
#include "IGS_ActiveStateChangedDynamicSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ActiveStateChangedDynamicSignature, bool, inIsActive);
