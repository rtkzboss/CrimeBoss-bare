#pragma once
#include "CoreMinimal.h"
#include "IGS_ToggleVisibilityModDelegateSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ToggleVisibilityModDelegateSignature, bool, inIsOn);
