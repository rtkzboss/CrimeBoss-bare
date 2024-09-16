#pragma once
#include "CoreMinimal.h"
#include "IGS_HordeModeActiveSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_HordeModeActiveSignature, const bool, Inactive);
